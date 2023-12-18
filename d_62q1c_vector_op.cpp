#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int l;
    cin >> l;

    vector<int> v;
    for (int i = 0; i < l; i++) {
        string c;
        cin >> c;

        if (c == "pb") {
            int x;
            cin >> x;
            v.push_back(x);
        } else if (c == "sa") {
            sort(v.begin(), v.end());
        } else if (c == "sd") {
            sort(v.begin(), v.end(), greater<int>());
        } else if (c == "r") {
            vector<int> v2;
            for (int i = v.size()-1; i >= 0; i--) {   
                v2.push_back(v[i]);
            }
            v = v2;
        } else if (c == "d") {
            int i;
            cin >> i;
            v.erase(v.begin()+i);
        }
    }

    for (auto e : v) {
        cout << e << " ";
    }

    return 0;
}