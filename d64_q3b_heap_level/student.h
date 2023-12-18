#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include <cmath>

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  long long idx = pow(2, k) - 1;
  while (idx < pow(2, k+1) - 1 && idx < mSize)
  {
    r.push_back(mData[idx]);
    idx++;
  }
  std::sort(r.begin(), r.end(), std::greater<T>());
  return r;
}

#endif

