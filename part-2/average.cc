// Gianna Davila
// dgianna@csu.fullerton.edu
// @dgianna707
// Partners: @dgianna707

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum = 0.0;

  for (double i = 1; i < arguments.size(); ++i) {
    double arg{std::stod(arguments[i])};
    sum += arg;
  }

  double average = 0.0;
  average = sum / arguments.size() - 1 ;
  std::cout << "average = " << average << "\n";

  return 0;
}
