#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int N, M, L;
    cin >> N >> M >> L;

    vector<int> v;
    for (int i = 0; i < L; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    set<string> setofcorrect;
    for (int i = 0; i < N; i++) {
        string wrong;
        cin >> wrong;

        string correct;
        for (int i = 0; i < L; i++) {
            int ascii = int(wrong[i]) - v[i];
            while (ascii < 97) {
                ascii += 26;
            }
            while (ascii > 122) {
                ascii -= 26;
            }
            
            correct += char(ascii);
        }
        // cout << wrong <<" "<< correct;
        setofcorrect.insert(correct);
    }

    for (int i = 0; i < M; i++) {
        string s;
        cin >> s;

        if (setofcorrect.find(s) != setofcorrect.end()) cout << "Match\n";
        else cout << "Unknown\n";
    }
    
    return 0;
}