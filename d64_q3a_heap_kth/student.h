#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  if (k == 1) return mData[0];

  if ( mLess(mData[1], mData[0]) ) { // normal heap (max->min Heap)
    if (k == 2) {
      if ( mLess(mData[1], mData[2]) ) return mData[2];
      else return mData[1];
    }
    else if (k == 3) {
      T max = mData[2];
      if ( mLess(max, mData[3]) ) max = mData[3];
      if ( mLess(max, mData[4]) ) max = mData[4];
      return max;
    }
  }
  else { // min->max Heap
    if (k == 2) {
      if ( mLess(mData[1], mData[2]) ) return mData[1];
      else return mData[2];
    }
    else if (k == 3) {
      T min = mData[2];
      if ( mLess(mData[3], min) ) min = mData[3];
      if ( mLess(mData[4], min) ) min = mData[4];
      return min;
    }
  }
  
}

#endif
