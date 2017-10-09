#pragma once
#include <iostream>
#include <vector>

template<class T>
struct dataElemnt
{
  bool operator<(dataElemnt rhs);
  dataElemnt(){}
  dataElemnt(T element) : element_(element){}
  void set(T element){element_=element;}
  T get(){return element_;}
private:
  T element_;
  
};
template<class T>
class Data
{
public:
  Data();
  Data(std::vector<dataElemnt<T>> vec);
  ~Data();
  void randomSet(unsigned int len);
  void swap(unsigned int indexA,unsigned int indexB);
  bool compare(unsigned int indexA,unsigned int indexB);
private:
  std::vector<dataElemnt<T>> vec_;
  
};

