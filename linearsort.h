#pragma once
#include <iostream>
#include <iomanip>
#include <vector>

class LinearSort
{
public:
LinearSort(std::vector<unsigned char> vec);
~LinearSort();
friend std::ostream& operator<<(std::ostream &os,LinearSort &sort)
{
  for(unsigned int i=0;i<sort.vec_.size();i++)
    (i%16 || i==0) ?
    os<<std::setfill('0')<<std::setw(2) <<std::hex <<(((int)sort.vec_[i])&0xFF)<<" " :
    os<<std::endl<<std::setfill('0')<<std::setw(2) <<std::hex <<(((int)sort.vec_[i])&0xFF)<<" " ;
  os<<std::endl;
  return os;
}
private:
  std::vector<unsigned char> vec_;
void sort();
};