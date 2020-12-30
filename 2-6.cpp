/*
Exercise 2-6. Here’s an extra exercise for puzzle fans. Write a program that will prompt the user to enter two different positive integers. Identify in the output the value of the larger integer and the value of the smaller integer
*/

#include <iostream>

int main()
{
    unsigned int value1 {5};
    unsigned int value2 {7};
    bool tmp { (value1 - value2) > 0 };

    std::cout << tmp << std::endl;
    return 0;
}