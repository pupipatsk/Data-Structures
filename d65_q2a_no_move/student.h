#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  int arrSize = mData[0].size();
  for (int i = 0; i < mData.size(); i++) {
    if (idx < mData[0].size()) { //first arr
      return mData[0][idx];
    }

    if (arrSize <= idx && idx < arrSize + mData[i].size()) {
      return mData[i][idx-arrSize];
    } else {
      arrSize += mData[i].size();
    }
  }
  // throw std::out_of_range("Index out of range");
  
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
}

#endif
