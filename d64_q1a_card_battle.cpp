#include<iostream>
#include<set>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n, m;
    cin >> n >> m;

    multiset<int> hand;
    for (int i = 0; i< n; i++) {
        int x;
        cin >> x;
        hand.insert(x);
    }

    int round = 0;
    for (int i = 0; i< m; i++) {
        round++;
        int amount;
        cin >> amount;
        for (int j = 0; j < amount; j++) {
            int opncard;
            cin >> opncard;

            auto itc = hand.upper_bound(opncard);

            if (itc == hand.end()) { //defeat
                cout << round;
                return 0;
            }
            hand.erase(itc);
        }
    }
    
    cout << round + 1;

    return 0;
}