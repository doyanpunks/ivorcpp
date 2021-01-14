/*
Exercise 3-4. Write a program to read four characters from the keyboard and pack them into a single integer variable. Display the value of this variable as hexadecimal. Unpack the four bytes of the variable and output them in reverse order, with the low-order byte first. 
*/

#include <iostream>
#include <iomanip>

int main()
{
  unsigned int input {};
  unsigned char ch {};

  std::cout << "enter a character: " << std::endl;
  std::cin >> ch;
  input |= ch;

  std::cout << "enter a character: " << std::endl;
  std::cin >> ch;
  input = input << 8;
  input |=ch;

  std::cout << "enter a character: " << std::endl;
  std::cin >> ch;
  input = input << 8;
  input |=ch;

  std::cout << "enter a character: " << std::endl;
  std::cin >> ch;
  input = input << 8;
  input |=ch;

  std::cout << std::hex << input << std::endl;
  
  return 0;
}
