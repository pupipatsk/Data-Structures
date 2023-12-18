#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, w;
    cin >> n >> w;

    if (w == n) w--;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        if (i < w) { //initialize
            ms.insert(v[i]);
            continue;
        }
        ms.insert(v[i]);

        auto it = ms.begin();
        for (int j = 0; j < ms.size()/2; j++) {
            it++;
        }
        cout << *it << " ";
        
        ms.erase(ms.find(v[i-w]));
    }

    return 0;
}