#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    
    set<int> output;
    output.insert(a);
    size_t idx = a; // initialize index
    auto it = output.begin();
    while (it != output.end())
    {
        idx = *it;
        // cout << "in" << idx <<endl;
        size_t Lchild = 2*idx + 1;
        // cout << "Lc="<<Lchild<<endl;
        size_t Rchild = 2*idx + 2;
        // cout << "Rc="<<Rchild<<endl;
        if (Lchild < n) output.insert(Lchild);
        if (Rchild < n) output.insert(Rchild);
        // for (auto e : output) {
        //     cout << e << " ";
        // } cout<<endl;
        it++;
    }
    
    // print output
    cout << output.size() << "\n";
    for (auto e : output) {
        cout << e << " ";
    }

    return 0;
}