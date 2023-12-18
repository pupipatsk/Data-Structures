#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for (auto& l : ls) {
    mSize += l.mSize;

    node *fst = l.mHeader->next;
    fst->prev = mHeader->prev;
    mHeader->prev->next = fst;

    node *lst = l.mHeader->prev;
    lst->next = mHeader;
    mHeader->prev = lst;

    l.mHeader->next = l.mHeader;
    l.mHeader->prev = l.mHeader;
  }
}

#endif