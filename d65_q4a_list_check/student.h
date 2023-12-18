#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here
  node *f = mHeader->next;
  node *l = mHeader->prev;
  if (f == NULL || l == NULL) return false;
  
  size_t mSize_check = 0;
  std::vector<T> frontTolast, lastTofront;
  while (mSize_check <= mSize)
  {
    mSize_check++;

    frontTolast.push_back(f->data);
    lastTofront.push_back(l->data);

    f = f->next;
    l = l->prev;
    if (f == NULL || l == NULL) return false;
  }

  for (int i = 0; i < mSize; i++) {
    size_t revIdx = mSize-1 - i;
    if (frontTolast[i-1] != lastTofront[revIdx+1]) return false;
    if (frontTolast[i] != lastTofront[revIdx]) return false;
    if (frontTolast[i+1] != lastTofront[revIdx-1]) return false;
  }
  
  return true;
}


#endif
