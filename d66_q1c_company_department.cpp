#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    map<string, string> People;
    map<string, set<string>> Department;
    while (N--)
    {
        string name, dept;
        cin >> name >> dept;
        People[name] = dept;
        Department[dept].insert(name);
    }
    while (M--)
    {
        int t;
        cin >> t;
        string a, b;
        cin >> a >> b;
        if (t == 1) {
            string newDept = b;
            string oldDept = People[a];
            if (newDept == oldDept) continue;
            Department[newDept].insert(a);
            Department[oldDept].erase(a);
            People[a] = newDept;
        }
        else if (t == 2) {
            string newDept = b;
            string oldDept = a;
            for (auto person : Department[oldDept]) {
                Department[newDept].insert(person);
                People[person] = newDept;
            }
            Department.erase(oldDept);
            
        }
    }
    // print
    for (auto p : Department) {
        string dept = p.first;
        cout << dept << ": ";
        set<string> members = p.second;
        for (auto member : members) {
            cout << member << " ";
        }
        cout << "\n";
    }

    return 0;
}