#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  T *arr = new T[2*mSize];
  for (int i = 0; i < mSize; i++) {
    arr[i] = mData[i];
  }
  for (int i = mSize-1; i >= 0; i--) {
    arr[(2*mSize-1)-i] = mData[i];
  }

  delete [] mData;
  
  mData = arr;
  mSize = 2*mSize;
  mCap = 2*mSize;
}

#endif