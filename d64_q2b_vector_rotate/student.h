#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  int idxFirst = first - begin();
  int idxLast = last - begin();
  T *temp = new T[k];
  for (int i = 0; i < k; i++) {
    temp[i] = mData[idxFirst + i];
  }
  // for (int i = 0; i < k; i++) {
  //   std::cout << temp[i] << " ";
  // } //print temp
  // std::cout << std::endl;

  for (int i = idxFirst; i < idxLast-k; i++) {
    mData[i] = mData[i + k];
  }
  int idxTemp = 0;
  for (int i = idxLast-k; i < idxLast; i++) {
    mData[i] = temp[idxTemp++];
  }
}

#endif
