#include<iostream>
#include<queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n, m;
    cin >> n >> m;

    vector<int> power(n);
    for (int i = 0; i < n; i++) {
        cin >> power[i];
    }

    vector<int> type(n);
    for (int i = 0; i < n; i++) {
        cin >> type[i];
    }

    vector<int> maxv(m,1);
    for (int i = 0; i < n; i++) {
        if (power[i] > maxv[type[i]]) maxv[type[i]] = power[i];
        int min = maxv[0];
        for (int j = 0; j < maxv.size(); j++) {
            if (maxv[j] < min) min = maxv[j];
        }
        cout << min << " ";
    }

    return 0;
}