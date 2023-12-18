#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  stack<int> st;
  for (const auto &p : v) {
    if (p.first == 1) st.push(p.second);
    if (p.first == 0) {
      int r = st.top();
      st.pop();
      int l = st.top();
      st.pop();
      if (p.second == 0) st.push(l + r);
      else if (p.second == 1) st.push(l - r);
      else if (p.second == 2) st.push(l * r);
      else if (p.second == 3) st.push(l / r);
    }
  }
  //DON"T FORGET TO RETURN THE RESULT
  return st.top();
}

#endif
