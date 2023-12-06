#include <iostream>

int main() {
    // Declare variables to store user input
    double firstNumber, secondNumber;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    // Calculate the sum
    double sum = firstNumber + secondNumber;

    // Display the result
    std::cout << "The sum of " << firstNumber << " and " << secondNumber << " is: " << sum << std::endl;

    return 0;           
}

