#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  size_t stackSize = this->size();
  if (stackSize < K) K = stackSize;
  for (int i = 0; i < K; i++) {
    this->pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  std::stack<T> revS2;
  size_t stackSize = this->size();
  if (stackSize < K) K = stackSize;
  for (int i = 0; i < K; i++) {
    revS2.push(this->top());
    this->pop();
  }

  std::stack<T> S2;
  while (!revS2.empty())
  {
   S2.push(revS2.top());
   revS2.pop();
  }
  
  //don't forget to return an std::stack
  return S2;
}

#endif
