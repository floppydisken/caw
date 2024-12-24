#include <bit>
#include <bitset>
#include <charconv>
#include <cstddef>
#include <format>
#include <iomanip>
#include <iostream>
#include <ranges>
#include <stdio.h>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#define PROJECT_NAME "wac"
#define DEBUG 1

int main(int argc, char *argv[]) {
  using std::operator""sv;

  constexpr auto delim = " "sv;
  for (std::string line; std::getline(std::cin, line);) {
    for (const auto &byte_str : std::views::split(line, delim)) {
      std::string r;
      for (char &c : byte_str) {
        r += c;
      }
      if (r != "a"sv) {
        std::cout << static_cast<char>(std::stol(r, nullptr, 16));
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
