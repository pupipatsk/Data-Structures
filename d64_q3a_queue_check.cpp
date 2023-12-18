#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int mFront, mSize, mCap, last, correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        bool isTrue = true;
        if (correction == 0) {
            if (isTrue) cout << "OK";
            else cout << "WRONG";
        } else if (correction == 1) {
            if (isTrue) cout << "OK";
            else {
                cout << "WRONG";
            }
        } else if (correction == 2) {
            if (isTrue) cout << "OK";
            else {
                cout << "WRONG";
            }
        } else if (correction == 3) {
            if (isTrue) cout << "OK";
            else {
                cout << "WRONG";
            }
        } else if (correction == 4) {
            if (isTrue) cout << "OK";
            else {
                cout << "WRONG";
            }
        }
    }

    return 0;
}