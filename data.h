#pragma once
#include <iostream>
#include <vector>

template<class T>
struct dataElemnt
{
  dataElemnt(){}
  dataElemnt(T element) : element_(element){}
  void set(T element){element_=element;}
  T& get(){return element_;}
  bool operator<(dataElemnt rhs){return element_< rhs.get();}
private:
  T element_;
  
};
template<class T>
class Data
{
public:
  Data(){}
  Data(std::vector<dataElemnt<T>> vec): vec_(vec){}
  ~Data(){}
  void randomSet(unsigned int len)
  {
  srand(time(nullptr));
  for(unsigned int i = len;i>0;i--)
    vec_.push_back(rand());
}
  void swap(unsigned int indexA,unsigned int indexB)
  {
    if(indexA >= this->vec_.size() || indexB >= this->vec_.size())
      return;
    std::swap<T>(vec_[indexA],vec_[indexB]);
  }
  bool compare(unsigned int indexA,unsigned int indexB)
  {
  if(indexA >= this->vec_.size() || indexB >= this->vec_.size())
    return false;
  return (vec_[indexA]<vec_[indexB]);
}
  T& operator[](unsigned int index)
  {
    return vec_[index].get();
  }
  unsigned int size(){return vec_.size();}
private:
  std::vector<dataElemnt<T>> vec_;
  
};

