#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  vector<T> v2;
  for (auto it = this->begin(); it != position; it++) {
    v2.push_back(*it);
  }
  for (auto it = first; it != last; it++) {
    v2.push_back(*it);
  }
  for (auto it = position; it != this->end(); it++) {
    v2.push_back(*it);
  }
  *this = v2;
}

#endif
