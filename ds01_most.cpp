#include<iostream>
#include<map>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> m;
    for (int i = 0; i < N; i++) {
        string k;
        cin >> k;
        map<string,int>::iterator it = m.find(k);
        if (it != m.end()){
            m[it->first]++;
        } else {
            m[k] = 1;
        }
    }

    int maxValue = -2147483648;
    string maxKey = "";
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second >= maxValue) {
            maxValue = it->second;
            if (it->first > maxKey) {
                maxKey = it->first;
            }
        }
    }
    
    cout << maxKey << " " << maxValue;
    
    return 0;
}