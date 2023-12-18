#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  T min;
  for (int i = 0; i < pos.size(); i++) {
    if (pos[i] > size()-1) continue;
    min = mData[pos[i]];
  }
  for (int i = 0; i < pos.size(); i++) {
    if (pos[i] > size()-1) continue;

    if (comp(mData[pos[i]], min)) min = mData[pos[i]];
  }
  //should return something
  return min;
}

#endif
