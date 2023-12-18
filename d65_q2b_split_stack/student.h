#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  std::vector<std::vector<T>> output(k);
  int j = 0;
  for (int i = mSize-1; i >= 0; i--) {
    j%=k;
    output[j].insert(output[j].begin(), mData[i]);
    j++;
  }
  return output;
}

#endif

