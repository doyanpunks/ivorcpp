/*
Exercise 2-2. Using your solution for Exercise 2-1, improve the code so that the user can control the precision of the output by entering the number of digits required. To really show off how accurate floating-point numbers can be, you can perhaps switch to double-precision floating-point arithmetic as well. You’ll need a more precise approximation of π. 3.141592653589793238 will do fine. 
*/

#include <iostream>
#include <iomanip>

int main()
{
    const double pi { 3.1415926535897932384626 };
    int radius {};
    int precision {};

    std::cout << "Enter the radius of the circle: " << std::endl;
    std::cin >> radius;
    std::cout << "Set the precision: " << std::endl;
    std::cin >> precision;

    double area { pi * radius * radius };

    std::cout << "Area of the circle: " << std::fixed << std::setprecision(precision) << area << std::endl;

    return 0;
}