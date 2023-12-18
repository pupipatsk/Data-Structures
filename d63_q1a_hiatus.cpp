#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector< pair<int,int> > data;
    for (int i = 0; i < n; i++) {
        int y, m;
        cin >> y >> m;

        data.push_back( {y, m} );
    }
    sort(data.begin(), data.end());

    for (int i = 0; i < m; i++) {
        int y, m;
        cin >> y >> m;

        pair<int,int> p = {y,m};
        auto it = lower_bound(data.begin(), data.end(), p);
        
        if (it == data.begin() || it == data.end()) {
            if (*it == p) {
                cout << "0 0 ";
                continue;
            }
            if (it == data.end()) {
                --it;
                cout << it->first << " " << it->second << " ";
                continue;
            } else {
                cout << "-1 -1 ";
                continue;
            }
        }
        if (*it == p) {
                cout << "0 0 ";
                continue;
        }
        
        --it;
        cout << it->first << " " << it->second << " ";  
    }
    
    return 0;
}