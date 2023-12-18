#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  int round = 0;
  for (int i = 0; i < pos.size(); i++) {
    int idx = pos[i];
    idx -= round;
    for (int j = idx; j < mSize - 1; j++) {
      mData[j] = mData[j+1];
    }
    mSize--;
    round++;
  }
}

#endif
