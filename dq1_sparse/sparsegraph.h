#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <set>

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        V.insert(0);
        V.insert(1);
        V.insert(2);
    }

    SparseGraph(int n_in) {
        // Your code here
        for (int i = 0; i < n_in; i++) {
            V.insert(i);
        }
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        this->V = G.V;
        this->E = G.E;
        this->G = {this->V, this->E};
    }

    void AddEdge(int a, int b) {
        // Your code here
        E.insert( {a, b} );
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        E.erase( {a, b} );
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if ( E.find( {a, b} ) != E.end() ) return true;
        else return false;
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph transposedGraph(*this);
        set<pair<int, int>> Et;
        for (auto& e : transposedGraph.E) {
            int a = e.first;
            int b = e.second;
            Et.insert({b, a});
        }
        transposedGraph.E = Et;
        return transposedGraph;
    }

protected:
    // Your code here
    set<int> V;
    set<pair<int, int>> E;
    pair<set<int>, set<pair<int, int>>> G = {V, E};
};
#endif // __SPARSE_GRAPH_H__

