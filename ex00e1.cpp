#include <iostream>

using namespace std;

int main(){
    int H,M,X;
    int t;
    cin >> H >> M >> X;
    t = H*60 + M + X;
    if (t >= 24*60) t -= 24*60;
    if (t/60 < 10) cout << 0;
    cout << t/60 << " ";
    t -= 60*(t/60);
    if (t < 10) cout << 0;
    cout << t;
    return 0;
}