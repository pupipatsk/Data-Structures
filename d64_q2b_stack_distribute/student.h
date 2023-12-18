#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  int stackSize = this->size();
  std::vector<int> vecMemSize(k);
  int sum = 0;
  for (int i = 0; i < k; i++) {
    vecMemSize[i] = stackSize / k;
    sum += vecMemSize[i];
  }
  if (sum != stackSize) {
    for (int i = 0; i < stackSize - sum; i++) {
      vecMemSize[i]++;
    }
  }
  // for (auto &e : vecMemSize) {
  //   std::cout << e << " ";
  // }
  std::vector<std::vector<T>> v(k);
  CP::stack<T> s(*this);
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < vecMemSize[i]; j++) {
      // std::cout << "sTop= " << s.top() <<std::endl;
      v[i].push_back(s.top());
      s.pop();
    }
  }
  return v;
}
#endif
