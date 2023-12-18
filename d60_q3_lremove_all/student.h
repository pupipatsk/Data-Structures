#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  node *p = mHeader->next;
  iterator it(p);
  std::vector<iterator> vIt;
  while (p != mHeader)
  {
    if (p->data == value) {
      vIt.push_back(it);
    }
    p = p->next;
    it++;
  }
  for (auto &dIt : vIt) {
    dIt.ptr->prev->next = dIt.ptr->next;
    dIt.ptr->next->prev = dIt.ptr->prev;
    delete dIt.ptr;
    mSize--;
  }
}

#endif
