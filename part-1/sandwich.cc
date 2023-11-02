// Gianna Davila
// dgianna@csu.fullerton.edu
// @dgianna707

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments" << std::endl;
    return 1;
  } else {
    std::string protein = arguments[1];
    std::string bread = arguments[2];
    std::string condiment = arguments[3];
    std::cout << "A " << protein << " sandwich on " << bread
              << " with " << condiment << ".\n";
    return 0;
  }

  return 0;
}
