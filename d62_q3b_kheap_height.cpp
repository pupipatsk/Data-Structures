#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, K;
    cin >> n >> K;
    
    if (K == 1) {
        cout << n-1;
        return 0;
    }

    long long height;
    height = floor(log(n) / log(K));
    // cout << height;
    long long amountNode;
    amountNode = (1 - pow(K, height+1)) / (1-K);

    if (n > amountNode) cout << ++height;
    else cout << height;

    return 0;
}