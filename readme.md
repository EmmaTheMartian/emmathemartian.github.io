# my website :D

I don't like writing HTML/CSS/JS but I like writing websites, so I wrote this
website using [Seal](https://github.com/emmathemartian/seal).

## Building

```sh
# You'll need Luarocks and a few packages
sudo apt install luarocks
sudo luarocks install fennel
sudo luarocks install --server=https://luarocks.org/dev seal
# (in one command:)
sudo apt install -y luarocks && sudo luarocks install fennel && sudo luarocks install --server=https://luarocks.org/dev seal

# Then to build the site, you can either run this...
sh build.sh
# ...or you can manually build with this
cd src
seal
mkdir -p ../build/
mv output.html ../build/index.html
```
