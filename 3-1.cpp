/*
  exercise 3-1. Create a program that prompts for input of an integer and store it
as an int. invert all the bits in the value and store the result. output the original value, the value with the bits inverted, and the inverted value plus 1, each in hexadecimal representation and on one line. on the next line, output the same numbers in decimal representation. these two lines should be formatted such that they look like a table, where the values in the same column are right aligned in
a suitable field width. all hexadecimal values should have leading zeros so eight hexadecimal digits always appear.
note: Flipping all bits and adding one—ring any bells? Can you perhaps already deduce what the output will be before you run the program?        
 */

#include <iostream>
#include <iomanip>

int main()
{
   std::cout << "Enter integer value: " << std::endl;

   unsigned int input{};
   std::cin >> input;

   unsigned int flipped_input = ~input;
   unsigned int flipped_input_plus_one;

   std::cout << "Original input: " << std::bitset<8>(input) << std::endl;
   std::cout << "Bits inverted: " << std::bitset<8>(flipped_input) << std::endl;
   std::cout << "Bits inverted plus one: " << std::bitset<8>(flipped_input_plus_one) << std::endl;

   std::cout << "In hexadecimal: " << std::endl;

   std::cout << "Original input: " << std::setw(8) << input <<  std::endl;
   std::cout << "Bits inverted: " << std::setw(8) << flipped_input << std::endl;
   std::cout << "Bits inverted plus one: " << std::setw(8) << flipped_input_plus_one << std::endl;



   return 0;
}
