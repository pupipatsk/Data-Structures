#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>

using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n = 3;
        G.resize(n, vector<bool>(n, false));
    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
        G.resize(n, vector<bool>(n, false));
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        this->n = G.n;
        this->G = G.G;
    }

    void AddEdge(int a, int b) {
        // Your code here
        G[a][b] = true;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        G[a][b] = false;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return G[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph transposedGraph(*this);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                transposedGraph.G[i][j] = G[j][i];
            }
        }
        return transposedGraph;
    }

protected:
    int n;
    // Your code here
    vector<vector<bool>> G;
};
#endif // __DENSE_GRAPH_H__
