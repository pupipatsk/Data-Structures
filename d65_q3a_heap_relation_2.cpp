#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long height(long long S, long long idx) {
    long long p, h = 0;
    while ((p = (idx-1) / S) >= 0)
    {
        h++;
        if (p == 0) break;
        idx = p;
    }
    // cout <<"h"<<idx<<"="<<h<<endl;
    return h;
}

bool isChild(long long S, long long a, long long b) {
    long long c = max(a, b);
    long long p = min(a,b);
    return p == (c - 1) / S;
}

bool isAncestor(long long S, long long a, long long b) {
    long long c = max(a, b);
    long long p;
    while ( (p = (c - 1) / S) >= min(a,b) )
    {
        if (p == min(a,b)) return true;
        c = p;
    }
    return false;
}

int relation(long long S, long long a, long long b) {
    if (isChild(S, a, b)) return 1;
    else if (isAncestor(S, a, b)) return 2;
    else if (height(S, a) != height(S, b)) return 3;
    else if (height(S, a) == height(S, b)) return 4;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    long long S,a,b;
    cin >> n;
    while (n--) {
        cin >> S >> a >> b;
        cout << relation(S,a,b) << " ";
    }
    cout << endl;
}