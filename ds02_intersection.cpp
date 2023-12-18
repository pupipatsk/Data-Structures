#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> v1;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());

    vector<int> v2;
    for (int i = 0; i < M; i++) {
        int x; cin >> x;
        v2.push_back(x);
    }
    sort(v2.begin(), v2.end());

    vector<int> v3;
    for (int f = 0; f < v1.size(); f++) {
        for (int s = 0; s < v2.size(); s++) {
            if (v1[f]==v2[s]) v3.push_back(v1[f]);
        }
    }
    for (int i = 0; i < v3.size(); i++) {
        if (i-1 >= 0 && v3[i]==v3[i-1]) continue;
        cout << v3[i] << " ";
    }
}