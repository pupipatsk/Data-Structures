#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long arrSize = pow(2, ceil(log2 (n)));
    cout << arrSize - n;
    return 0;
}