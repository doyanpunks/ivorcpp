/*
Exercise 2-4. For your birthday you’ve been given a long tape measure and an instrument that measures angles (the angle between the horizontal and a line to the top of a tree, for instance). If you know the distance, d, you are from a tree, and the height, h, of your eye when peering into your angle-measuring device, you can calculate the height of the tree with the formula h + d*tan(angle). Create a program to read h in inches, d in feet and inches, and angle in degrees from the keyboard, and output the height of the tree in feet.
*/

#include <iostream>
#include <cmath>

int main()
{
    unsigned int distance {};
    std::cout << "Enter the distance: ";
    std::cin >> distance;   

    unsigned int angle {};
    std::cout << "Enter the angle: ";
    std::cin >> angle;

    unsigned int height_of_the_eye {};
    std::cout << "Enter height of the eye: ";
    std::cin >> height_of_the_eye;

    double height_of_the_tree { abs(height_of_the_eye + (distance * std::tan(angle) )) };

    std::cout << "height of the tree: " << height_of_the_tree << " feets" << std::endl;

    return 0;
}