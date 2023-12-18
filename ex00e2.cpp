#include <iostream>

using namespace std;

int main() {
    int N,M,R;
    cin >> N >> M >> R;

    int table[N][M];
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < M; c++) {
            cin >> table[r][c];
        }
    }

    int r1, c1, r2, c2;
    for (int i = 0; i < R; i++) {    
        cin >> r1 >> c1 >> r2 >> c2;
        r1--; c1--; r2--; c2--;

        //invalid
        if (r1 > r2 || c1 > c2) {
            cout << "INVALID" << endl;
            continue;
        }

        //outside
        if (r1 < 0 || c1 < 0 || r1 > N-1 || c1 > M-1){
            cout << "OUTSIDE" << endl;
            continue;
        }
        if (r2 > N-1 ) r2 = N-1;
        if (c2 > M-1 ) c2 = M-1;

        int Max = table[r1][c1];
        for (int r = r1; r <= r2; r++) {
            for (int c = c1; c <= c2; c++) {
                if (table[r][c] > Max) Max = table[r][c]; 
            }
        }
        cout << Max << endl;
    }
    
    return 0;
}