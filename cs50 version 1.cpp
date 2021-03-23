#include "cs50 version 1.hpp"
#include <iostream>
#include <string>

using std::string;

// prompt the user for ...
char get_char(string, char c); // a char
double get_double(string, double d); // a double
float get_float(string, float f); // a float

int get_int(string str, int i) // an int
{
  // declares needed variable
  string input;

  try
  {
    // prompts the user for input
    std::cout << str;
    std::getline(std::cin >> std::ws, input);

    // checks if the input is a valid int
    i = std::stoi(input);
    if(input != std::to_string(i))
    {
      throw "invalid";
    }
    else
    {
      return i;
    }
  }
  catch(...)
  {
    return get_int(str);
  }
}

long get_long(string, long l); // a long int
string get_string(string, string s); // a string
