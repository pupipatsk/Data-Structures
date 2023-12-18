#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  CP::stack<T> s1(*this);
  CP::stack<T> revS1;
  CP::stack<T> revS2;
  for (int i = 0; i < k; i++) {
    // std::cout<< "in1" <<std::endl;
    if (!s1.empty()) {
      revS1.push(s1.top());
      s1.pop();
    } else break;
    // if (s1.empty()) break;
  }
  for (int i = 0; i < m; i++) {
    // std::cout<< "in2" <<std::endl;
    if (!s2.empty()) {
      revS2.push(s2.top());
      s2.pop();
    } else break;
    // if (s2.empty()) break;
  }
  while (!revS2.empty())
  {
    // std::cout<< "in3" <<std::endl;
    s1.push(revS2.top());
    revS2.pop();
  }
  while (!revS1.empty())
  {
    // std::cout<< "in4" <<std::endl;
    s1.push(revS1.top());
    revS1.pop();
  }
  *this = s1; // don't forget this
}
#endif
