#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int N, M;
    cin >> N >> M;

    set<pair<string,string>> availableSeats;
    for (int i = 0; i < N; i++) {
        string flight, seat;
        cin >> flight >> seat;
        availableSeats.insert({flight, seat});
    }

    for (int i = 0; i < M; i++) {
        int amount;
        cin >> amount;
        set<pair<string,string>> requestSeats;
        while (amount > 0)
        {
            string flight, seat;
            cin >> flight >> seat;
            requestSeats.insert({flight, seat});
            amount--;
        }

        bool bookSuccess = true;
        for (auto& p : requestSeats) {
            if (availableSeats.find(p) == availableSeats.end()) {
                bookSuccess = false;
            }
        }
        
        if (bookSuccess) {
            cout << "YES\n";
            for (auto& p : requestSeats) {
                availableSeats.erase(p);
            }
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}