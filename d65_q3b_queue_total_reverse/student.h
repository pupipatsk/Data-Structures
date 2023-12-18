#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"
#include <stack>

template <typename T>
void CP::queue<T>::reverse() {
  // Your code here
  T *tmp = new T[mSize];
  size_t tmpIdx = 0;
  size_t round = mSize;
  size_t idx = (mFront + mSize - 1) % mCap; // start from back
  while (round--)
  {
    tmp[tmpIdx++] = mData[idx];
    idx = (idx - 1 + mCap) % mCap; // idx--
  }
  delete[] mData;
  mData = tmp;
  mCap = mSize;
  mFront = 0;
}

template <typename T>
const T& CP::queue<T>::front() const {
  // You MAY need to edit this function
  return mData[mFront];
}

template <typename T>
const T& CP::queue<T>::back() const {
  // You MAY need to edit this function
  return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  mData[(mFront + mSize) % mCap] = element;
  mSize++;
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  mFront = (mFront + 1) % mCap;
  mSize--;
}

#endif