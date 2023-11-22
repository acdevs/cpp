#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<unordered_map>
using namespace std;

class Graph{
    int V;
    unordered_map<int, list<int>> adj;

public:
    Graph(int v){
        this->V = v;
    }

    void addEdge(int u, int v, bool bidir = true){
        this->adj[u].push_back(v);
        if(bidir)
            this->adj[v].push_back(u);
    }

    void printAdj(){
        for(auto i : this->adj){
            cout << i.first << " : ";
            for(auto j : i.second)
                cout << j << " ";
            cout << endl;
        }
    }

    void bfs(){
        cout << endl << "BFS Traversal:" << endl;
        queue<int> q;
        unordered_map<int, bool> visited;

        for(int i = 0; i < V; i++){
            if(visited[i])
                continue;
            
            q.push(i);
            visited[i] = 1;

            while(!q.empty()){
                int front = q.front();
                q.pop();

                cout << front << " ";
                
                for(auto i : this->adj[front]){
                    if(!visited[i]){
                        q.push(i);
                        visited[i] = 1;
                    }
                }
            }
        }
    }

    void dfsHelper(int src, unordered_map<int, bool> &visited){
        cout << src << " ";
        visited[src] = 1;

        for(auto i : this->adj[src]){
            if(!visited[i])
                dfsHelper(i, visited);
                cout << endl;
        }
    }

    void dfs(){
        cout << endl << "DFS Traversal:" << endl;
        unordered_map<int, bool> visited;

        for(int i = 0; i < V; i++){
            if(!visited[i])
                dfsHelper(i, visited);
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
        g.addEdge(u, v, false);
    }
    cout << endl;

    cout << "Adjacency List:" << endl;
    g.printAdj();

    // ----------------------------------------------------------

    g.bfs();
    cout << endl;
    g.dfs();
}