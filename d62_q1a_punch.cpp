#include <iostream>
#include <vector>

using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it, int k) {
    //write some code here
    vector<string> v2;
    int low = (it-v.begin()) - k;
    int high = (it-v.begin()) + k;

    if (low < 0) low = 0;
    if (high > v.size()) high = v.size();

    for (int f = 0; f < low; f++) {
        v2.push_back(v[f]);
    }
    for (int b = high+1; b < v.size(); b++) {
        v2.push_back(v[b]);
    }
    //don’t forget to return something
    return v2;
}

int main() {
    int n,j,k;
    cin >> n >> j >> k;

    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i]; 
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}