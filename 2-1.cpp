/*
Exercise 2-1. Write a program that will compute the area of a circle. The program should prompt for the radius of the circle to be entered from the keyboard, calculate the area using the formula area = pi * radius * radius, and then display the result. 
*/

#include <iostream>

int main()
{
    const double pi {3.141592};
    int radius {};
    std::cout << "Enter the radius of the circle: " << std::endl;
    std::cin >> radius;

    double area { pi * radius * radius };

    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}