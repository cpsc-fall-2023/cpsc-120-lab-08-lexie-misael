// Lexie Riley
// le_tiny_tato@csu.fullerton.edu
// @rileya046
// Partners: @Policarpom548

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (!(arguments.size() >= 2)) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  // Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double total = 0.0;
  int count = 0;
  double average = 0.0;

  for (const std::string& arg : arguments) {
    if (count == 0) {
      count = count + 1;
      continue;
    }
    double num = std::stod(arg);
    total = total + num;
    count = count + 1;
  }

  average = total / (count - 1);
  // After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "\naverage = " << average;

  return 0;
}
