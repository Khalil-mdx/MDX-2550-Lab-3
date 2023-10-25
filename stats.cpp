#include <iostream> // Include the necessary header file for input/output operations
#include <cmath>    // Include the header file for mathematical functions

int main() {
    int num1, num2; // Declare two integer variables to store user input

    std::cout << "Enter two numbers: "; // Prompt the user to enter two numbers
    std::cin >> num1 >> num2; // Read the user input and store it in num1 and num2

    // Calculate basic statistics
    int sum = num1 + num2; // Calculate the sum of num1 and num2
    int difference = num1 - num2; // Calculate the difference between num1 and num2
    int product = num1 * num2; // Calculate the product of num1 and num2
    int distance = std::abs(difference); // Calculate the absolute value of the difference
    double meanAverage = static_cast<double>(sum) / 2; // Calculate the mean average as a double

    // Output the calculated statistics with appropriate messages
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
    std::cout << "The difference between " << num1 << " and " << num2 << " is " << difference << std::endl;
    std::cout << "The product of " << num1 << " and " << num2 << " is " << product << std::endl;
    std::cout << "The distance between " << num1 << " and " << num2 << " is " << distance << std::endl;
    std::cout << "The mean average of " << num1 << " and " << num2 << " is " << meanAverage << std::endl;

    return 0; // Indicate successful program execution
}