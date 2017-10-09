#pragma once
#include <iostream>
#include <vector>

class LinearSort
{
public:
LinearSort(std::vector<unsigned char> vec);
~LinearSort();
private:
  std::vector<unsigned char> vec_;
};