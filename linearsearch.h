#pragma once
#include <iostream>
#include <vector>

class LinearSearch
{
public:
LinearSearch(std::vector<unsigned char> vec);
~LinearSearch();
private:
  std::vector<unsigned char> vec_;
};