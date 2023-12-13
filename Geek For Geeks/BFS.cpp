#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> visited(V, 0);
    
        visited[0] = 1;
        queue<int> q;
        q.push(0);
        
        // Traversing all the vartices
        for (int i = 0; i < V; i++){
            if(!visited[i]){
                while(!q.empty()){
                    int frontNode = q.front();
                    q.pop();
                    ans.push_back(frontNode);
            
                    // Traversing all the neighbours of current node
                    for(auto j: adj[frontNode]){
                        if(!visited[j]){
                            q.push(j);
                            visited[j] = 1;
                        }
                    }
                }
            }
        }
        return ans; 
    }
};