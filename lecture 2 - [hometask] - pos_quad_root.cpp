#include <iostream>
#include <cmath> // For sqrt() function

int main()
{
    // Problem Inputs: Coefficients of the quadratic equation ax^2 + bx + c = 0
    double a = 1, b = 2, c = 3;
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): ";

    // Intermediate Variables: Discriminant and parts of the quadratic formula
    double discriminant, sqrt_discriminant, denominator, positive_root;

    // Step 1: Calculate the discriminant (b^2 - 4ac)
    discriminant = b * b - 4 * a * c;

    // a sample comment only
    // Step 2: Calculate the square root of the discriminant
    sqrt_discriminant = sqrt(discriminant);

    // Step 3: Calculate the denominator (2a)
    denominator = 2 * a;

    // Step 4: Calculate the positive root using the quadratic formula
    // Quadratic formula: positive_root = (-b + sqrt(discriminant)) / (2a)
    positive_root = (-b + sqrt_discriminant) / denominator;

    // Problem Output: The positive root of the quadratic equation
    std::cout << "The positive root of the quadratic equation is: " << positive_root << std::endl;

    return 0;
}