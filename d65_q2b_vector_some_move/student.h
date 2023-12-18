#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  int i = std::upper_bound(aux.begin(), aux.end(), index) - aux.begin();
  if (i > 0)
    index -= aux[i - 1];
  // mData[i][index];

  std::vector<T> v;
  for (size_t j = index; j < mData[i].size(); j++)
  {
    v.push_back(mData[i][j]);
  }
  
  mData[i].resize(index + value.size());
  for (size_t j = index; j < mData[i].size(); j++)
  {
    mData[i][j] = value[j - index];
  }

  mData.insert(mData.begin() + i + 1, v);
  //mData.insert(mData.begin() + i + 1, v.begin(), v.end()); //wrong 

  aux.resize(aux.size() + 1);
  for (size_t j = 0; j < mData.size(); j++) {
    if (j == 0)
      aux[j] = mData[j].size();
    else
      aux[j] = mData[j].size() + aux[j-1];
  }

  mCap = aux.back();
  mSize = aux.back();
}

#endif