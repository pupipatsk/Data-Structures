#include<iostream>
#include<map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int N, M;
    cin >> N >> M;

    map<string, string> mp;
    for (int i = 0; i < N; i++) {
        string f, s;
        cin >> f >> s;

        mp[s] = f;
    }

    for (int i = 0; i < M; i++) {
        string a, b;
        cin >> a >> b;

        if (mp[mp[a]] == "" || mp[mp[b]] == "" || a==b) cout << "NO" << endl;
        else if (mp[mp[a]] == mp[mp[b]]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}