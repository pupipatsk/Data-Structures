#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <algorithm>
#include <cmath>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  auto it = std::find(&mData[0], &mData[0] + mSize, k);
  if (it != &mData[0] + mSize) return true;
  else return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  int idx;
  for (int i = mSize-1; i >= 0; i--) {
    if (mData[i] == k) {
      idx = i;
      break;
    }
  }
  if (find(k))
    return floor( log2(idx+1) );
  else return -1;
}

#endif

