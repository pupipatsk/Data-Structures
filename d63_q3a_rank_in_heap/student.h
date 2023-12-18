#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  size_t count = 0;
  for (int i = 0; i < mSize; i++) {
    if (mData[i] > mData[pos]) count++;
  }
  return count;
}

#endif
