#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N, M;
    cin >> N >> M;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < M; i++) {
        int x; cin >> x;
        bool found = false;

        for (int f = 0; f < N; f++) {
            auto it = lower_bound(v.begin(), v.end(), x-v[f]);
            if ((v[f] + *it == x) && (it != v.begin()+f)) found = true;
        }

        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}