#include <iostream>
#include <vector>

using namespace std;

void cross_2d(vector<vector<int>> &m ,int r1, int r2, int c1, int c2) { 
    //your code here
    r1++; r2++; c1++; c2++;

    vector<vector<int>> m2;
    for (int r = 1; r <= m.size(); r++) {
        if (r < r1 || r > r2) {
            vector<int> row;
            for (int c = 1; c <= m[0].size(); c++) {
                if (c < c1 || c > c2) {
                    row.push_back(m[r-1][c-1]);
                }
            }
            m2.push_back(row);
        }
    }
    
    m = m2;
}

int main() { 
    ios_base::sync_with_stdio(false);cin.tie(0); 
    vector<vector<int>> m;
    int r,c,r1,r2,c1,c2;
    cin>> r >> c;
    cin >> r1 >> r2 >> c1 >> c2;
    m.resize(r);
    for (int i = 0;i < r;i++) {
        m[i].resize(c);
        for (int j = 0;j < c;j++) {
            cin >> m[i][j];
        }
    }
    cross_2d(m,r1,r2,c1,c2);
    for (int i =0;i < m.size();i++) {
        for (int j = 0;j < m[i].size();j++) { 
            cout << m[i][j] << " "; 
        }
        cout << "\n";
    }
    return 0;
}