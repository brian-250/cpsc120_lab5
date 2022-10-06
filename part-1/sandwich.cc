// Max Rivas
// CPSC 120-01
// 2022-10-06
// Rivas.max11@csu.fullerton.edu
// @Mrivas0331
//
// Lab 05-01
// Partners: @brian-250
//
// Create sandwich
//

#include <iostream>
#include <string>
#include <vector>
int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  } 
    std::string protein{arguments[1]};
    std::string bread{arguments[2]};
    std::string condiment{arguments[3]};

    std::cout << "Your order:\nA " << protein << " sandwich on " << bread
              << " with " << condiment << ".";
  

  return 0;
}
