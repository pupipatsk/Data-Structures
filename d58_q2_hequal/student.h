#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  //write your code here
  if (mSize != other.mSize) return false;

  priority_queue<T,Comp> thisCopy(*this);
  priority_queue<T,Comp> otherCopy(other);
  for (int i = 0; i < mSize; i++) {
    if (thisCopy.top() != otherCopy.top()) return false;
    thisCopy.pop();
    otherCopy.pop();
  }
  return true; // you can change this line
}

#endif
