#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, list<int>> &adjList, vector<bool> &visited, stack<int> &st){
    visited[node] = true;
    for(auto neighbour: adjList[node]){
        if(!visited[neighbour]){
            dfs(neighbour, adjList, visited, st);
        }
    }
    st.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int> ans;
    unordered_map<int, list<int>> adjList;
    for(int i = 0; i < e; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adjList[u].push_back(v);
    }

    vector<bool> visited(v, false);
    stack<int> st;

    for (int i = 0; i < v; i++){
        if(!visited[i]){
            dfs(i, adjList, visited, st);
            // st.push(i);
        }
    }

    while (!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}