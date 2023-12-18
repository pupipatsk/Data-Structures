#include <iostream>
#include <list>
#include <vector>

using namespace std;

void check() {
    
}

int main() {
    int N, K, V;
    cin >> N >> K >> V;

    list<int> l;
    vector<std::list<int>::iterator> delIt;
    auto it = l.begin();
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (i <= K) it++;
        if (i == K) l.push_back(V);
        l.push_back(x);
    }
    delIt.push_back(it);
    
    auto fwd = it; fwd--;
    auto bwd = it; bwd++;

    int count = 1;
    int round = 1;
    bool goForward = true, goBackward = true;
    while(*fwd == *bwd || round == 1) {
        round++;
        // cout<<round;
        while (goForward || goBackward)
        {
            if (*fwd == V) {
                count++;
                delIt.push_back(fwd);
                fwd--;
            } else goForward = false;

            if (*bwd == V) {
                count++;
                delIt.push_back(bwd);
                bwd++;
            } else goBackward = false;
        }
        // cout<<round<<" "<<count<<" "<<*fwd<<" "<<*bwd<<" "<<V<<endl;
        if (count >= 3) {
            // cout<<"boom"<<endl;
            for (auto& dit : delIt) {
                l.erase(dit);
            }
            if (l.size() == 0) break;
            delIt.clear();
            count = 1;
            goForward = true;
            goBackward = true;
            V = *bwd;
        }
    }

    // Print out the list
    for (int n : l) std::cout << n << " ";

    return 0;
}