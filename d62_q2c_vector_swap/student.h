#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  // your code here
  T *tempData = mData; //pointer
  mData = other.mData;
  other.mData = tempData;

  size_t tempCap = mCap;
  mCap = other.mCap;
  other.mCap = tempCap;

  size_t tempSize = mSize;
  mSize = other.mSize;
  other.mSize = tempSize;
}

#endif
