// Max Rivas
// CPSC 120-01
// 2022-10-06
// Rivas.max11@csu.fullerton.edu
// @Mrivas0331
//
// Lab 05-03
// Partners: @brian-250
//
// Creates a game of blackjack
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  int sum = 0;
  int bust = 21;
  for (std::string& copy : arguments) {
    if (copy == arguments[0]) {
      continue;
    }
    if (copy == "J" || copy == "j" || copy == "K" || copy == "k" ||
        copy == "Q" || copy == "q") {
      sum += 10;
    } else if (copy == "A" || copy == "a") {
      if (sum + 11 > 21) {
        sum += 1;
      } else if (sum + 11 <= 21) {
        sum += 11;
      }
    } else if (copy.size() >= 2 && copy != "10") {
      std::cout << "error: unknown card '" << copy << "'";
      return 1;
    } else if (std::stoi(copy) > 1 && std::stoi(copy) < 11) {
      sum += std::stoi(copy);
    } else {
      std::cout << "error: unknown card '" << std::stoi(copy) << "'";
      return 1;
    }
  }
  if (sum <= bust) {
    std::cout << "Score is " << sum;
  } else {
    std::cout << "Score is " << sum << ", BUST";
  }
  return 0;
}