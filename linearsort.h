#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include "data.h"
template<class T>
class LinearSort
{
public:
  LinearSort(Data<T> data) : data_(data)
{
  sort();
}
~LinearSort(){}
friend std::ostream& operator<<(std::ostream &os,LinearSort &sort)
{
  for(unsigned int i=0;i<sort.data_.size();i++)
    (i%8 || i==0) ?
    os<<std::setfill('0')<<std::setw(sizeof(T)) <<std::hex<<(((int)sort.data_[i])&0xFF)<<" " :
    os<<std::endl<<std::setfill('0')<<std::setw(sizeof(T)) <<std::hex <<(((int)sort.data_[i])&0xFF)<<" " ;
  os<<std::endl;
  return os;
}
private:
 Data<T> data_;
  void sort()
  {
  for(unsigned int i=0;i<data_.size();i++)
  {
    for(unsigned int j=i;j<data_.size();j++)
    {
      if(data_[i] > data_[j])
      {
	std::swap<T>(data_[i],data_[j]);
      }
    }
  }
}
};