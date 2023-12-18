#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> vLow;
    vector<int> vUp;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        vLow.push_back(a);
        vUp.push_back(b);
    }
    sort(vLow.begin(), vLow.end());
    sort(vUp.begin(), vUp.end());

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        int found = 0;
        vector<int>::iterator itLow = lower_bound(vLow.begin(), vLow.end(), x);
        vector<int>::iterator itUp = lower_bound(vUp.begin(), vUp.end(), x);
        if (x < vLow[0] || vUp[vUp.size()-1] < x) found = 0; // out of set
        else if ((*itLow == *itUp) && (x != *itLow)) found = 0; // 5 / 6 6
        else if (x == *itLow || x == *itUp) found = 1; // at bound
        else if (*--itLow < x && x < *itUp) { // in set[]
            if (itLow - vLow.begin() == itUp - vUp.begin()) { // same vector index //itLow already -1(--)
                found = 1;
            }
        }
    
        if (found) cout << "1 ";
        else cout << "0 ";
    }

    return 0;
}