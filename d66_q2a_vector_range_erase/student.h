#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include <set>

#include "vector.h"

template <typename T>
void CP::vector<T>::range_erase(
    std::vector<std::pair<iterator, iterator>>& ranges) {
  // Write code here
  std::set<int> setToDelete;
  for (auto& p : ranges) {
    int lowIdx = p.first - begin();
    int highIdx = p.second - begin();
    for (int i = lowIdx; i < highIdx; i++) {
      setToDelete.insert(i);
    }
  }

  CP::vector<T> output;
  
  // version 1 // 50p
  // for (int i = 0; i < mSize; i++) {
  //   if (setToDelete.find(i) == setToDelete.end()) {
  //     output.push_back(mData[i]);
  //   }
  // }

  // version 2 // -p
  // std::set<int> sfv(begin(), end());
  // // std::set<int> sfv;
  // // for (int i = 0; i < mSize; i++) {
  // //   sfv.insert(mData[i]);
  // // }
  // // for (auto& e : sfv) std::cout << e << " ";
  // // std::cout << std::endl;
  // for (const auto& e : setToDelete) {
  //   auto it = sfv.find(e);
  //   if (it != sfv.end()) 
  //     sfv.erase(it);
  // }
  // for (const auto& e : sfv) {
  //   output.push_back(e);
  // }

  // version 3 // -p
  std::set<int> sfv(begin(), end());
  for (auto it = setToDelete.begin(); it != setToDelete.end(); it++) {
    if (sfv.find(*it) != sfv.end())
      sfv.erase(*it);
  }
  for (auto it = sfv.begin(); it != sfv.end(); it++) {
    output.push_back(*it);
  }
  *this = output;
}

#endif
