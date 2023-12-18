#include <vector>
#include <set>

using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s;
    for (int i = 0; i < A.size(); i++) {
        v.push_back(A[i]);
        s.insert(A[i]);
    }
    
    for (int j = 0; j < B.size(); j++) {
        if (s.find(B[j]) == s.end()) {
            v.push_back(B[j]);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> setA(A.begin(), A.end());
    set<T> setB(B.begin(), B.end());
    for (int i = 0; i < A.size(); i++) {
        if (setA.find(A[i]) != setA.end() && setB.find(A[i]) != setB.end()) {
            v.push_back(A[i]);
        }
    }
    return v;
}
