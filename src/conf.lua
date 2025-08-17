-- Add searchers so that we can use Fennel and Moonscript with Seal
require('fennel').install()
require('moonscript')

-- Requirements
seal = require 'seal'
local lfs = require 'lfs'
local secrets = require 'data.secrets'

-- Globals
-- if not vars then vars = {} end -- This should never happen but I have it here so my LSP doesn't complain
seal.vars.time = os.date("%Y-%m-%d %X", os.time())
for i, secret in ipairs(secrets) do
	print('-> secret.' .. secret .. ': ' .. secret .. ' #' .. i .. '/' .. #secrets)
	seal.vars["secret." .. secret] = i
end
seal.vars.secrets = #secrets

-- Copy static files to build/
lfs.mkdir('output/')
lfs.mkdir('output/static/')
for file in lfs.dir('static/') do
	if file == '.' or file == '..' then
		goto continue
	end

	local fin = io.open('static/' .. file, 'r+')
	if fin == nil then
		print('error: failed to open `static/' .. file .. '`')
		goto continue
	end

	local fout = io.open('output/static/' .. file, 'w+')
	if fout == nil then
		print('error: failed to open `output/static/' .. file .. '`')
		goto continue
	end

	fout:write(fin:read('*all'))

	fin:close()
	fout:close()

	::continue::
end

-- Pages
local pages = {
	-- Handle 404.seal manually instead of in walk()
	['./pages/404.seal'] = '404.html'
}

local function walk(p)
	for path in lfs.dir(p) do
		-- Skip . and ..
		if path == "." or path == ".." then
			goto continue
		end

		local file = p .. '/' .. path
		-- Recurse into subdirectories
		if lfs.attributes(file).mode == "directory" then
			walk(file)
		end

		-- Skip non-.seal files
		if not path:match('^.*%.seal$') then
			goto continue
		end

		-- Skip files that have already been handled
		for key, _ in pairs(pages) do
			if key == file then
				goto continue
			end
		end

		-- Get the output path (excluding ./output/)
		local output = file:gsub('^%./pages/', ''):gsub('%.seal$', '') .. '/index.html'
		if path == "index.seal" then
			-- Pages called index.seal will not have a subdirectory
			-- made for them automatically.
			output = output:gsub("index/index%.html$", "index.html")
		end

		-- Add the page for compilation
		pages[file] = output

		-- Get the directory that the compiled HTML file would be put at
		-- so that we can mkdir to prevent Seal from trying to make
		-- files in non-existent directories.
		local dir = 'output/' .. output:gsub("index%.html$", "")
		print(dir)
		if not lfs.attributes(dir) then
			lfs.mkdir(dir)
		end

		::continue::
	end
end

walk("./pages")

return pages
