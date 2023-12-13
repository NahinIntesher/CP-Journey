#include<bits/stdc++.h>
using namespace std;

unordered_map<int, list<int>> makeAdjList(vector<vector<int>> &edges){
    unordered_map<int, list<int>> adj ;
    for(int i = 0; i < edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return adj;
}


void DFS(vector<int> &component, unordered_map<int, list<int>> &adj, 
unordered_map<int, bool> &visited, int node){
    component.push_back(node);
    visited[node] = true;

    // Traversing all the neighbour node
    for(auto i: adj[node]){
        if(!visited[i]){
            DFS(component, adj, visited, i);
        }
    } 
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges){
    // Making adjlist
    unordered_map<int, list<int>> adj = makeAdjList(edges);
        
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    // Traversing all the vartices
    for (int i = 0; i < V; i++){
        if(!visited[i]){
            vector<int> component;
            DFS(component, adj, visited, i);
            ans.push_back(component);
        }
    }
    return ans; 
}