#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >>k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vector<int> oup;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        auto low = lower_bound(v.begin(), v.end(), x-k);
        auto up = upper_bound(v.begin(), v.end(), x+k);
        int frq = up - low;
        oup.push_back(frq);
    }

    for (int i : oup) {
        cout << i << " ";
    }

    return 0;
}
