-- Add searchers so that we can use Fennel and Moonscript with Seal
require('fennel').install()
-- require('moonscript')

return {
	["other.seal"] = "index.html",
	["index.seal"] = "other/index.html",
	["about.seal"] = "about/index.html",
}
