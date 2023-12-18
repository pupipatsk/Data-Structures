#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  size_t round = b-a+1;
  T *tmp = new T[round];
  for (int i = 0; i < round; i++) {
    tmp[i] = mData[(mFront+b-i+mCap)%mCap];
    // std::cout << tmp[i] <<" ";
  }
  // std::cout << std::endl;
  for (int i = 0; i < round; i++) {
    // std::cout << mData[(mFront+a+i)%mCap] <<" ";
    mData[(mFront+a+i)%mCap] = tmp[i];
  }
  delete[] tmp;
}

#endif
