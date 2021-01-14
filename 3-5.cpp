/*
Exercise 3-5. Write a program that defines an enumeration of type Color where the enumerators are Red, Green, Yellow, Purple, Blue, Black, and White. Define the type for enumerators as an unsigned integer type and arrange for the integer value of each enumerator to be the RGB combination for the color it represents (you can easily find the hexadecimal RGB encoding of any color online). Create variables of type Color initialized with enumerators for yellow, purple, and green. Access the enumerator value and extract and output the RGB components as separate values.
*/

#include <iostream>
#include <iomanip>

int main()
{
  const unsigned int R { 0xFF0000u };
  const unsigned int G { 0x00FF00u };
  const unsigned int B { 0x0000FFu };
  
  enum class Color : unsigned int {
    Red       = R,
    Green     = G,
    Yellow    = R | G,
    Purple    = R | B,
    Blue      = B,
    White     = R | G | B
  };

  Color yellow { Color::Yellow };
  Color purple { Color::Purple };
  Color green  { Color::Green };

  auto color { static_cast<unsigned int> (yellow) };
  std::cout << "Yellow: " << std::endl;
  std::cout << "R: " << std::setw(3) << ((color & R) >> 16) << std::endl;
  std::cout << "G: " << std::setw(3) << ((color & G) >> 8)  << std::endl;
  std::cout << "B: " << std::setw(3) << (color & B)         << std::endl;

  color = static_cast<unsigned int> (purple) ;
  std::cout << "Purple: " << std::endl;
  std::cout << "R: " << std::setw(3) << ((color & R) >> 16) << std::endl;
  std::cout << "G: " << std::setw(3) << ((color & G) >> 8)  << std::endl;
  std::cout << "B: " << std::setw(3) << (color & B)         << std::endl;

  color = static_cast<unsigned int> (green) ;
  std::cout << "Green: " << std::endl;
  std::cout << "R: " << std::setw(3) << ((color & R) >> 16) << std::endl;
  std::cout << "G: " << std::setw(3) << ((color & G) >> 8)  << std::endl;
  std::cout << "B: " << std::setw(3) << (color & B)         << std::endl;
  

  return 0;
}

