#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
    public:
    int Nodes;
    int Edges;
    unordered_map<T, list<T> > adj;
    void addEdges(T u, T v, T direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i: adj){
            cout << i.first << " -> ";
            for(auto j: i.second){
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    graph<int> g;
    for (int i = 0; i < edges.size(); i++){
        for (int j = 0; j < edges[i].size(); j++){
            int u = edges[i][0];
            int v = edges[i][1];
            g.addEdges(u , v, 0);
        }
    }

    
}

int main(){

}