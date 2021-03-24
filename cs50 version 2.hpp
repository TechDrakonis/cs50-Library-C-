#ifndef CS50_HPP
#define CS50_HPP

#include <iostream>
#include <string>

using std::string;

template <typename T>
T get_value(string outstr)
{
  std::cout << "Not an supported Data Type! Supported Data Types are: c, d, f, i, l, s ...";
  getchar();
  throw "error";
}

template <>
char get_value <char> (string outstr)
{
  // declare needed variable
  string str;

  // initialize variable and check for abnormalities
  try
  {
    std::cout << outstr;
    std::getline(std::cin >> std::ws, str);

    if(str.length() != 1)
    {
      throw "error - not a char";
    }

    return str[0];
  }
  catch(...)
  {
    return get_value <char> (outstr);
  }
}

template <>
double get_value <double> (string outstr)
{
  // declare needed variable
  string str;

  // initialize variables and check for abnormalities
  try
  {
    std::cout << outstr;
    std::getline(std::cin >> std::ws, str);

    return std::stod(str);
  }
  catch(...)
  {
    return get_value <double> (outstr);
  }
}

template <>
float get_value <float> (string outstr)
{
  // declare needed variable
  string str;

  // initialize variables and check for abnormalities
  try
  {
    std::cout << outstr;
    std::getline(std::cin >> std::ws, str);

    return std::stof(str);
  }
  catch(...)
  {
    return get_value <float> (outstr);
  }
}

template <>
int get_value <int> (string outstr)
{
  // declare needed variable
  string str;
  int num;

  // initialize variables and check for abnormalities
  try
  {
    std::cout << outstr;
    std::getline(std::cin >> std::ws, str);
    num = std::stoi(str);

    if(str != std::to_string(num))
    {
      throw "error - not a int";
    }

    return num;
  }
  catch(...)
  {
    return get_value <int> (outstr);
  }
}

template <>
long get_value <long> (string outstr)
{
  // declare needed variable
  string str;
  long num;

  // initialize variables and check for abnormalities
  try
  {
    std::cout << outstr;
    std::getline(std::cin >> std::ws, str);
    num = std::stol(str);

    if(str != std::to_string(num))
    {
      throw "error - not a long";
    }

    return num;
  }
  catch(...)
  {
    return get_value <long> (outstr);
  }
}

template <>
string get_value <string> (string outstr)
{
  // declare needed variable
  string str;

  // initialize variable and check for abnormalities
  try
  {
    std::cout << outstr;
    std::getline(std::cin >> std::ws, str);

    return str;
  }
  catch(...)
  {
    return get_value <string> (outstr);
  }
}

#endif // CS50.HPP
