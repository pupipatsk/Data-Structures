#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    while (m--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "a and b are the same node\n";
            continue;
        }

        int greaterAmount, lesserAmount;
        greaterAmount = max(a, b);
        lesserAmount = min(a, b);

        if (lesserAmount == 0) {
            if (a < b) 
                cout << "a is an ancestor of b\n";
            else 
                cout << "b is an ancestor of a\n";
            continue;
        }

        int findAncestorIdx = (greaterAmount - 1) / 2;
        bool found = false;
        while (findAncestorIdx >= lesserAmount)
        {
            if (findAncestorIdx == lesserAmount) {
                found = true;
                break;
            }
            else 
                findAncestorIdx = (findAncestorIdx - 1) / 2;
        }
        
        if (found) {
            if (a < b) 
                cout << "a is an ancestor of b\n";
            else 
                cout << "b is an ancestor of a\n";
        }
        else 
            cout << "a and b are not related\n";
        
    }
    

    return 0;
}