#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    map<string,int> m;
    for (int i=0; i < N; i++) {
        string s;
        cin >> s;
        
        if ( m.find(s) != m.end()) {
            m[s]++;
        } else {
            m[s] = 1;
        }
    }
    
    //print map
    for (auto it=m.begin(); it != m.end(); it++) {
        if ((it->second) > 1) {
            cout << it->first << " " << it->second << endl;
        }
    }
    return 0;
}