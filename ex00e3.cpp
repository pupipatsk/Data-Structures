#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N; cin >> N;

    vector<int> v1, v2;
    for (int i = 0; i < N; i++) {
        v1.push_back(i+1);

        int x; cin >> x;
        v2.push_back(x);
    }
    sort(v2.begin(), v2.end());

    bool isOK = true;
    for (int i = 0; i < v1.size(); i++) {
        auto it = lower_bound(v2.begin()+i, v2.end(), v1[i]);
        if (it == v2.end() || *it != v1[i]) {
            isOK = false;
            break;
        }
    }

    if (isOK) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}