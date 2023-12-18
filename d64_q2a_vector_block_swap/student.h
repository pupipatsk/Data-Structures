#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if (m == 0) return false;

  int lesserIdx = a - begin();
  int greaterIdx = b - begin();
  if (b < a) {
    lesserIdx = b - begin();
    greaterIdx = a - begin();
  }
  // std::cout <<"less"<< lesserIdx << std::endl;
  // std::cout <<"great"<< greaterIdx << std::endl;

  if (greaterIdx <= lesserIdx+m-1) return false;
  if (lesserIdx < 0 || greaterIdx+m-1 > mSize-1) return false;

  T *tempArr = new T[m];
  int mdataCopyIdx = lesserIdx;
  for (int i = 0; i < m; i++) {
    tempArr[i] = mData[mdataCopyIdx++];
  }

  for (int i = lesserIdx; i < lesserIdx+m; i++) {
    // std::cout <<i<< mData[i] << std::endl;
    mData[i] = mData[i + (greaterIdx-lesserIdx)];
  }
  for (int i = greaterIdx; i < greaterIdx+m; i++) {
    mData[i] = tempArr[i - greaterIdx];
  }

  return true;
}

#endif
