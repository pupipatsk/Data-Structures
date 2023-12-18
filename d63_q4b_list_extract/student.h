#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  if (mSize == 0 || a == b) return ;
  
  node *p = a.ptr;
  while (p != mHeader && p != b.ptr)
  {
    if (p->data == value) {
      //push_front
      node *f = output.mHeader->next;
      node *tmp = new node(value,output.mHeader,f);
      output.mHeader->next = tmp;
      f->prev = tmp;
      output.mSize++;
      //erase
      p->prev->next = p->next;
      p->next->prev = p->prev;
      mSize--;
    }
    p = p->next;
  }
  
}

#endif
