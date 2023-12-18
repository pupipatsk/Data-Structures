#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)

  if (this->empty() && !other.empty()) return true;

  if (!this->empty() && !other.empty()) {
    if (this->mData[0] < other.mData[0]) return true;

    if (this->mData[0] == other.mData[0]) {
      int minSize = mSize;
      if (other.mSize < minSize) minSize = other.mSize;

      for (int i = 0; i < minSize; i++){
        if (this->mData[i] < other.mData[i]) return true;
        if (this->mData[i] > other.mData[i]) return false;
      }
      return mSize < other.mSize; //if all elem eq
    }
  }
  return false;
}

#endif
