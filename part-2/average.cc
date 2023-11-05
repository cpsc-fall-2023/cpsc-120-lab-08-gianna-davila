// Gianna Davila
// dgianna@csu.fullerton.edu
// @dgianna707
// Partners: @dgianna707

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int total{static_cast<int>(arguments.size() - 1)};

  if (arguments.size() == 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum = 0.0;

  for (std::string arg : arguments) {
    if (arg == arguments[0]) {
      arg = "0";
      continue;
    }
    sum += std::stod(arg);
  }

  double average = 0.0;
  average = sum / total;
  std::cout << "average = " << average << "\n";

  return 0;
}
