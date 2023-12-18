#include <iostream>
#include <map>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    //freopen("d66_q1a_topsale.in", "r", stdin);
    //freopen("d66_q1a_topsale.out", "w", stdout);

    int N, M;
    cin >> N >> M;

    map<int,int> data;    
    while (N > 0)
    {
        int id;
        cin >> id;
        data[id];
        N--;
    }

    while (M > 0)
    {
        int type;
        cin >> type;
        if (type == 1) {
            int id, amount;
            cin >> id >> amount;
            if (data.find(id) != data.end()) {
                data[id] += amount;
            }
        } else if (type == 2) {
            int K;
            cin >> K;
            
            int maxId = -1, maxAmount = -1;
            for (auto& p : data) {
                if (p.second < K && p.second > 0) {
                    if (p.second >= maxAmount) {
                        maxId = p.first;
                        maxAmount = p.second;
                    }
                }
            }
            if (maxId >= 0) cout << maxId <<"\n";
            else cout << "NONE\n";
        }
        M--;
    }
    

    return 0;
}