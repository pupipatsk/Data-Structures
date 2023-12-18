#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if (a == b) return a;
  iterator front_it = a;
  iterator back_it = b;
  back_it--;
  while (front_it != back_it)
  {
    std::swap(*front_it, *back_it);
    front_it++;
    if (front_it == back_it) break;
    back_it--;
  }
  return a;
}

#endif
