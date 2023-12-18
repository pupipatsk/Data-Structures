#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  int tmp = mData[(mFront+pos)%mCap];
  for (int i = (mFront+pos)%mCap; i <= (mFront+mSize-2)%mCap; i++) {
    mData[i] = mData[(i+1)%mCap];
  }
  mData[(mFront+mSize-1)%mCap] = tmp;
}

#endif
