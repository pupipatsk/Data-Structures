#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  // your code here
  std::vector<int> sizeofeachQ(k);
  int count = 0;
  for (int i = 0; i < k; i++) {
    sizeofeachQ[i] = mSize / k;
    count += mSize / k;
  }
  for (int i = 0; i < k; i++) {
    if (count == mSize) break;
    sizeofeachQ[i]++;
    count++;
  }

  int idx = mFront;
  for (int i = 0; i < sizeofeachQ.size(); i++) {
    std::queue<T> tmp;
    for (int j = 0; j < sizeofeachQ[i]; j++) {
      tmp.push(mData[idx++ % mCap]);
    }
    output.push_back(tmp);
  }
  
}

#endif
