#include<iomanip>
#include<iostream>
#include<map>

using namespace std;

int main () {
    cout<<std::fixed<<std::setprecision(2);
    ios_base::sync_with_stdio(false); cin.tie(0);

    int N;
    cin >> N;

    map<int, pair<int, int> > mapSbj;
    map<string, pair<int, int> > mapT;
    for (int i = 0; i < N; i++) {
        int sbj, score;
        string T;
        cin >> sbj >> T >> score;

        mapSbj[sbj].first += score;
        mapSbj[sbj].second++; 
        
        mapT[T].first += score;
        mapT[T].second++;
    }

    //print
    for (auto it=mapSbj.begin(); it != mapSbj.end(); it++) {
        cout << it->first << " ";
        cout << ((it->second).first + 0.0) / (it->second).second;
        cout << "\n";
    }
    for (auto it=mapT.begin(); it != mapT.end(); it++) {
        cout << it->first << " ";
        cout << ((it->second).first + 0.0) / (it->second).second;
        cout << "\n";
    }

    return 0;
}