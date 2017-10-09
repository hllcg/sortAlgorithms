#include <iostream>
#include "linearsort.h"
#include "bubleSort.h"
//TODO BucketSort  (LinearSort)
//TODO RadixSort (LinearSort)
//TODO 
int main(int argc, char **argv)
{
//   std::vector<unsigned char> vec{1,2,8,24,5,2,3,1,2};
  Data<unsigned char> vec;
  vec.randomSet(3);
  BubleSort<unsigned char> bubleSort(vec);
  std::cout<<bubleSort;
  return 0;
}