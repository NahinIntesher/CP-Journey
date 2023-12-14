#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int NoOfProVinces = 0;
    void DFS(unordered_map<int, vector<int>> &adjList, unordered_map<int, bool> &visited, int node){
        visited[node] = true;
        for(auto neighbour: adjList[node]){
            if(!visited[neighbour]){
                DFS(adjList, visited, neighbour);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        unordered_map<int, vector<int>> adjList(V);
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(adj[i][j] == 1 && i != j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            } 
        }
        unordered_map<int, bool> visited;
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                NoOfProVinces++;
                DFS(adjList, visited, i);
            }
        }
        return NoOfProVinces;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, x;
        cin >> V;
        vector<vector<int>> adj;
        for(int i = 0; i < V; i++){
            vector<int> temp;
            for(int j = 0; j < V; j++){
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}