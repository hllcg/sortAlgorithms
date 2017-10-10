#include <iostream>
#include "linearsort.h"
#include "bubleSort.h"
//1-) BubleSort
//2-) BucketSort  (LinearSort)
//3-) RadixSort (LinearSort)
//4-) InsertionSort
//5-) MergeSort
//6-) QuickSort
//7-) HeapSort
//8-) SelectionSort

int main(int argc, char **argv)
{
//   std::vector<unsigned char> vec{1,2,8,24,5,2,3,1,2};
  Data<unsigned char> vec;
  vec.randomSet(24);
  BubleSort<unsigned char> bubleSort(vec);
  std::cout<<bubleSort;
  return 0;
}