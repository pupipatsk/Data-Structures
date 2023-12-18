#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

bool customCompare(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    int N, K;
    cin >> N >> K;

    map<string, int> m;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        if (m.find(s) != m.end()) {
            m[s]++;
        } else {
            m[s] = 1;
        }
    }
    
    vector< pair<string, int> > v;
    for (auto &p : m) {
        v.push_back( p );
    }
    sort(v.begin(), v.end(), customCompare);

    if (K > v.size()) K = v.size();
    cout << v[K-1].second;

    return 0;
}