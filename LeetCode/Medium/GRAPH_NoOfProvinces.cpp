#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int NoOfProVinces = 0;
    void DFS(unordered_map<int, vector<int>> &adjList,unordered_map<int, bool> &visited, int node){
        visited[node] = true;
        for(auto neighbour: adjList[node]){
            if(!visited[neighbour]){
                DFS(adjList, visited, neighbour);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        unordered_map<int, vector<int>> adjList(V);
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(isConnected[i][j] == 1 && i != j){
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
    // vector<vector<int>> adj = {{1,1,0},{1,1,0},{0,0,1}};
    vector<vector<int>> adj = {{1,0,0},{0,1,0},{0,0,1}};
    Solution ob;
    cout << ob.findCircleNum(adj) << endl;
    
}