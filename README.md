# Introduction

A C++20 project to test out meson build system, with conan and clangd in
neovim.

caw converts any string input into a hexadeximal representatio, wac then
converts that stream into a readable string again. So a "to hexadecimal to
string" converter suite.

Not meant to be used for anything other than testing and exploration. Next up,
how do we install a library from conan and get autocompletion for it?

# Usage

The binary reads from stdin and can be used like so which converts the input
into the hexadeximal representation
```sh
echo "some input whatever it is" | caw
```

This can then be converted back to the string representation with the following
```sh
echo "some input whatever it is" | caw | wac
```

# How to build

Make sure you have
[just](https://github.com/casey/just?tab=readme-ov-file#installation),
[Meson](https://mesonbuild.com/Quick-guide.html) and
[Conan](https://docs.conan.io/2/installation.html) installed then to build the
project simply run the `just build` which will produce the binaries
`./build/caw` and `./build/wac`.

