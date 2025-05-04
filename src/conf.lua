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
	['index.seal'] = 'index.html'
}
for path in lfs.dir('.') do
	if not path:match('^.*%.seal$') or path == 'index.seal' then
		goto continue
	end
	pages[path] = path:gsub('%.seal$', '') .. '/index.html'
	::continue::
end
return pages
