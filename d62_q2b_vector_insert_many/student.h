#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  std::map<int,T> mp;
  for (auto &p : data) {
    mp[p.first] = p.second;
  }
  T *tmp = new T[mSize + mp.size()];
  int count = 0;
  for (auto &p : mp) {
    tmp[p.first + count] = p.second;
    count++;
  }
  int count = 0;
  for (int i = 0; i < mSize + mp.size(); i++) {
    if (tmp[i] != T()) { //hasNonDefaultValue
      count++;
      continue;
    }
    tmp[i] = mData[i-count];
  }
  mData = tmp;
  mCap = mSize + mp.size();
  mSize = mSize + mp.size();
}

#endif
