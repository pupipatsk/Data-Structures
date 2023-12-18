#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  for (int i = mFront; i < mFront+k; i++) {
    res.push_back(mData[i]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  int cap = to - from;
  mData = new T[cap];
  for (auto it = from; it != to; it++) {
    mData[it-from] = *it;
  }
  mCap = cap;
  mSize = cap;
  mFront = 0;
}

#endif
