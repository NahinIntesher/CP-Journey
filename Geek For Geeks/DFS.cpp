#include <bits/stdc++.h>
using namespace std;

// Recursively
class Solution {
  private:
    void DFS(vector<int> &ans, vector<int> adj[], int visited[], int node){
        visited[node] = 1;
        ans.push_back(node);
    
        // Traversing all the neighbour node
        for(auto i: adj[node]){
            if(!visited[i]){
                DFS(ans, adj, visited, i);
            }
        } 
    }

  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        int visited[V] = {0};
        int start = 0;
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                DFS(ans, adj, visited, i);
            }
        }
        return ans;
    }
};