#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, vector<int>::iterator a, vector<int>::iterator b) {
    //write your code only in this function
    vector<int> v2;
    for (auto it = v.begin(); it < a; it++) {
        v2.push_back(*it);
    }
    for (auto it = b-1; it >= a; it--) {
        v2.push_back(*it);
    }
    for (auto it = b; it < v.end(); it++) {
        v2.push_back(*it);
    }
    v = v2;
}
int main() {
  //read input
  int n,a,b;
  cin >> n;
  vector<int> v;
  for (int i = 0;i < n;i++) {
    int c;
    cin >> c;
    v.push_back(c);
}
cin >> a >> b;
  //call function
  reverse(v,v.begin()+a,v.begin()+b+1);
  //display content of the vector
  for (auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}