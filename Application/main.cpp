#include "../MathLibrary/src/LibraryCode.hpp"
#include <cstdio>
// #include <fltk>
#include <iostream>
#include <memory_resource>
#include <string>
#include <utility>
#include <vector>

int main() {
  auto l = [] [[nodiscard, gnu::noinline]] (
             [[maybe_unused]] auto value) [[gnu::deprecated]] { return 42; };

  std::vector<std::pair<std::string, int>> myvec2 = {{"salitod", 43},
                                                     {"hello", 46}};
  for (const auto &[a, b] : myvec2) {
    std::cout << a << b << "\n";
  }
  for (const auto &elem : myvec2) {
    std::cout << elem.first << elem.second << '\n';
  }

  if (true) {

  } else {
  }

  int s = sum(2, 3);
  std::vector<int> myvec = {1, 2, 3};
  std::puts("Actual application");
  std::printf("sum = %i \n", s);
  printf("l= %i \n", l(12));
}
