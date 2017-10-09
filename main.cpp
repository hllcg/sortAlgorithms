#include <iostream>
#include "linearsort.h"

int main(int argc, char **argv) {

  std::vector<unsigned char> vec{1,2,8,24,5,2,3,1,2};
  LinearSort sort(vec);
  std::cout<<sort;
  return 0;
}