#include "linearsort.h"
using namespace std;
LinearSort::LinearSort(std::vector<unsigned char> vec) : vec_(vec)
{
  sort();
}

LinearSort::~LinearSort()
{

}
void LinearSort::sort()
{
  for(unsigned int i=0;i<vec_.size();i++)
  {
    for(unsigned int j=i;j<vec_.size();j++)
    {
      if(vec_[i] > vec_[j])
      {
	auto tmp = vec_[i];
	vec_[i] = vec_[j];
	vec_[j] = tmp;
      }
    }
  }
}
