#include <iostream>
using namespace std;

/* Adjacency Matrix */

class Graph{
    int V;
    int **adj;

public:
    Graph(int v){
        this->V = v;
        this->adj = new int*[v];
        for(int i = 0; i < v; i++){
            this->adj[i] = new int[v]{0};
        }
    }

    void addEdge(int u, int v, bool bidir = true){
        this->adj[u][v] = 1;
        if(bidir)
            this->adj[v][u] = 1;
    }

    void print(){
        for(int i = 0; i < this->V; i++){
            for(int j = 0; j < this->V; j++)
                cout << this->adj[i][j] << " ";
            cout << endl;
        }
    }
};

int main(){
    int v, e;
    cout << "vertices: ";
    cin >> v;
    cout << "edges: ";
    cin >> e;

    Graph g(v);
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    cout << endl;

    cout << "Adjacency Matrix:" << endl;
    g.print();
}