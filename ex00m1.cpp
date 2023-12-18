#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("ex00m1.5.in", "r", stdin);
    // freopen("ex00m1.5.out", "w", stdout);
    // cout << "new";

    int N, M;
    cin >> N >> M;

    vector<int> T;
    for (int i = 0; i < N; i++) {
        int t;
        cin >> t;
        T.push_back(t);
    }

    if (N > M) {
        for (int j = 0; j < M; j++) {
            cout << "0\n";
        }
        return 0;
    }
    

    int clock = 0;
    vector<int> seat;
    while (M > 0)
    {
        //fill seat first
        if (seat.empty()) {
            for (int i = 0; i < T.size(); i++) {
                seat.push_back(T[i]);
                cout << clock << "\n";
                M--;
                if (M == 0) return 0;
            }
            clock++;
            continue;
        }

        //update seat
        for (int i = 0; i < seat.size(); i++) {
            seat[i]--;
        }

        //check if 0 and update
        vector<int> temp;
        for (int i = 0; i < seat.size(); i++) {
            if (seat[i] == 0) {
                temp.push_back(T[i]);
                cout << clock << "\n";
                M--;
                if (M == 0) return 0;
            }
            else temp.push_back(seat[i]);
        }
        seat = temp;

        clock++;
    }
    

    return 0;
}