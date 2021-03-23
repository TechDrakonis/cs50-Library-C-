#include <iostream>
#include <string>
#include "cs50 version 2.hpp"

// declare template function for better performance
template <typename T>
T get_value(std::string str, T value)
{
  // declare needed variables
  std::string input;
  char type{ typeid(T).name()};

  try
  {
    // initialize needed variables according to the data type
    std::cout << str;
    switch(type)
    {
      // char
      case 'c':
        std::cin >> std::ws >> value;
        break;

      // double, float, int, long
      case 'd' || 'f' || 'i' || 'l':
        std::getline(std::cin >> std::ws, input);

        if(type == 'd')
        {
          value = std::stod(input);
        }
        else if(type == 'f')
        {
          value = std::stof(input);
        }
        else if(type == 'i')
        {
          value == std::stoi(input);
        }
        else
        {
          value == std::stol(input);
        }

        // validation
        if(input != std::to_string(value))
        {
          throw "invalid";
        }
        break;

      // std::string
      case 's':
        std::getline(std::cin >> std::ws, value);
    }

    return value;
  }
  catch(...)
  {
    return get_value(str, value);
  }
}
