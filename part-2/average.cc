// Max Rivas
// CPSC 120-01
// 2022-10-06
// Rivas.max11@csu.fullerton.edu
// @Mrivas0331
//
// Lab 05-02
// Partners: @brian-250
//
// Create sandwich
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  float sum = 0.0;
  for (const std::string& copy : arguments) {
    if (copy == arguments[0]) {
      continue;
    }
    float num = std::stof(copy);
    sum += num;
  }
  float average = 0.0;
  average = sum / (static_cast<float>(arguments.size() - 1.0));
  std::cout << "average = " << average;

  return 0;
}
