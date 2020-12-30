/*
Exercise 2-3. Create a program that converts inches to feet and inches. In case you’re unfamiliar with imperial units: 1 foot equals 12 inches. An input of 77 inches, for instance, should thus produce an output of 6 feet and 5 inches. Prompt the user to enter an integer value corresponding to the number of inches and then make the conversion and output the result.
*/

#include <iostream>

int main()
{
    int inches {};
    std::cout << "Enter number of inches: " << std::endl;
    std::cin >> inches;

    std::cout << "feet: " << static_cast<int>(inches / 12) << " and " << "inches: " << inches % 12 << std::endl;
    return 0;
}