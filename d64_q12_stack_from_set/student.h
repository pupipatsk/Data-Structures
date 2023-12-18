#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  mSize = 0;
  for (auto it = first; it != last; it++) {
    mSize++;
  }
  mCap = mSize;
  mData = new T[mCap];
  size_t idx = mSize - 1;
  for (auto it = first; it != last; it++) {
    mData[idx--] = *it;
  }
}

#endif
