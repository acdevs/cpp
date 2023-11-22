#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>

class Graph{
    int V;
    unordered_map<T, list<T>> adj;

public:
    Graph(int v){
        this->V = v;
    }

    void addEdge(T u, T v, bool bidir = true){
        this->adj[u].push_back(v);
        if(bidir)
            this->adj[v].push_back(u);
    }

    void print(){
        for(auto i : this->adj){
            cout << i.first << " : ";
            for(auto j : i.second)
                cout << j << " ";
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

    Graph<int> g(v);
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, false);
    }
    cout << endl;

    cout << "Adjacency List:" << endl;
    g.print();
}
