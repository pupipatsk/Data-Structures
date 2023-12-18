#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>>& output, size_t k) const {
  // Write code here
  CP::stack<T> s(*this);

  std::vector<int> eachStackSize(k);
  for (int i = 0; i < k; i++) {
    eachStackSize[i] = mSize / k;
  }
  for (int i = 0; i < mSize - k * (mSize / k); i++) {
    eachStackSize[i]++;
  }
  
  for (auto& e : eachStackSize) {
    std::stack<T> revTmp;
    std::stack<T> tmp;
    for (int i = 0; i < e; i++) {
      if (!s.empty()) {
        revTmp.push(s.top());
        s.pop();
      }
    }
    while (!revTmp.empty()) {
      tmp.push(revTmp.top());
      revTmp.pop();
    }
    output.push_back(tmp);
  }
}

#endif
