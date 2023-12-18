#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can modify and use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT, MappedT, CompareT>::my_recur(
    node* n,
    size_t level, size_t tmp,
    std::vector<KeyT>& v) {

    // Termination case

    if (tmp > level) return ;
      // Base case: reached the desired level
    if (tmp == level && n != NULL) {
        v.push_back(n->data.first);
        return ;
    }

      // Base case for leaf nodes
    if (n->left == NULL && n->right == NULL) return ; // 0 childs
    // Recursive calls
    if (n->right == NULL) { // 1 childs L
        my_recur(n->left, level, tmp + 1, v);
    } else if (n->left == NULL) { // 1 childs R
        my_recur(n->right, level, tmp + 1, v);
    } else { // 2 childsa
        my_recur(n->right, level, tmp + 1, v);
        my_recur(n->left, level, tmp + 1, v);
    }
}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
std::vector<KeyT> CP::map_bst<KeyT,MappedT,CompareT>::at_level(size_t level) {
  //write your code here
  std::vector<KeyT> output;
  my_recur(mRoot, level, 0, output);
  return output;
}


#endif
