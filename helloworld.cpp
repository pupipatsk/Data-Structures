#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int bit;
    cin >> bit;
    int N = pow(2,bit);
    int clk = 1;
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            cout << "i = " << i << " ";
            cout << "j = " << j << " ";
            cout << "clk = " << clk << "\n";;
            clk++;
        }
    }

    return 0;
}