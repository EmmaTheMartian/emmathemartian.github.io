# my website :D

I don't like writing HTML/CSS/JS but I like writing websites, so I wrote this
website using [Seal](https://github.com/emmathemartian/seal).

## Building

```sh
# You'll need Luarocks and a few packages
sudo apt install luarocks
sudo luarocks install fennel
sudo luarocks install seal
# Or all in one command:
sudo apt install -y luarocks && sudo luarocks install fennel && sudo luarocks install seal

# Then to build the site, you can run this:
sh build.sh
```
