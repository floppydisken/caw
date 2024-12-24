#include <argparse/argparse.hpp>
#include <bit>
#include <bitset>
#include <cstddef>
#include <format>
#include <iostream>
#include <stdio.h>
#include <string>
#include <utility>

#define PROJECT_NAME "caw"

int main(int _argc, char *argv[]) {
  argparse::ArgumentParser program(PROJECT_NAME);

  bool first = true;
  for (char c; (c = std::getchar()) != EOF;) {
    if (first) {
      std::cout << std::format("{:x}", c);
      first = false;
    } else {
      std::cout << std::format(" {:x}", c);
    }
  }
  std::cout << std::unitbuf;
  return 0;
}
