#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void member_multiply(vector<int> &v,
                     vector< pair< vector<int>::iterator,int > > &multiply) {
    //write your code here
    sort(multiply.begin(), multiply.end());
    map< vector<int>::iterator, int > mp;
    for (auto &p : multiply) {
        mp[p.first] = p.second;
    }
    vector<int> v2;
    for (int i = 0; i < v.size(); i++) {
        v2.push_back(v[i]);
        map< vector<int>::iterator, int >::iterator it;
        if ((it = mp.find(v.begin()+i)) != mp.end()) {
            for (int j = 0; j < it->second; j++) {
                v2.push_back(*it->first);
            }   
        }
    }
    v = v2;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >> m;

    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b;
        multiply[i].first = v.begin()+a;
        multiply[i].second = b;
    }

    member_multiply(v,multiply);

    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}