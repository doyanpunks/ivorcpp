/*
Exercise 2-5. Your body mass index (BMI) is your weight, w, in kilograms divided by the square of your height, h, in meters (w/(h*h)). Write a program to calculate the BMI from a weight entered in pounds and a height entered in feet and inches. A kilogram is 2.2 pounds, and a foot is 0.3048 meters.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    unsigned int weight {};
    std::cout << "Enter your weight in kilograms: " << std::endl;
    std::cin >> weight;
    static_cast<double> (weight * 2.2);
    //std::cout << "weight" << weight << std::endl;
    
    double height {};
    std::cout << "Enter your height in meters: " << std::endl;
    std::cin >> height;
    static_cast<double> ( abs(height * 0.3048) );
    //std::cout << "height" << height << std::endl;
    
    double bmi { weight / (height * height) };
    
    std::cout << "you BMI: " << std::fixed << std::setprecision(2) << bmi << std::endl;
    
    return 0;
}