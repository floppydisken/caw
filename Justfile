install:
  conan install . --output-folder=build --build=missing

build:
  conan install . --output-folder=build --build=missing \
  && cd build \
  && meson setup --native-file conan_meson_native.ini \
  && meson compile
