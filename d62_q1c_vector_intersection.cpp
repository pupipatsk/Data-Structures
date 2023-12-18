#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int M, N;
    cin >> M >> N;

    vector<int> v1;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());

    vector<int> v2;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    sort(v2.begin(), v2.end());

    vector<int> v3;
    for (int f = 0; f < v1.size(); f++) {
        auto it = lower_bound(v2.begin(), v2.end(), v1[f]);
        if (v1[f]== *it) v3.push_back(v1[f]);
    }
    for (int i = 0; i < v3.size(); i++) {
        if (i-1 >= 0 && v3[i]==v3[i-1]) continue;
        cout << v3[i] << " ";
    }

    return 0;
}