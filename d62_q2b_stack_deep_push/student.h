#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here

  // 1st Version, 0.014 s, 1660 kb //
  // CP::stack<T> s2;
  // for (size_t i = 0; i < pos; i++) {
  //   s2.push(this->top());
  //   this->pop();
  // }

  // this->push(value);

  // while (!s2.empty())
  // {
  //   this->push(s2.top());
  //   s2.pop();
  // }

  // 2nd Version, 0.008 s, 1528 kb
  ensureCapacity(mSize + 1);
  for (size_t i = mSize; i > mSize - pos; i--) {
    mData[i] = mData[i-1];
  }
  mData[mSize - pos] = value;
  mSize++;
}

#endif
