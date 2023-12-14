#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void BFS(int ROW, int COL, vector<vector<char>>& grid, vector<vector<int>> &visited){
        visited[ROW][COL] = 1;
        queue<pair<int, int>> q;
        q.push({ROW, COL});
        int n = grid.size();
        int m = grid[0].size(); 

        while (!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int delRow = -1; delRow <= 1; delRow++){
                for (int delCol = -1; delCol <= 1; delCol++){
                    int nRow = row + delRow;
                    int nCol = col + delCol;
                    if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m 
                    && visited[nRow][nCol] == 0 && grid[nRow][nCol] == '1'){
                        visited[nRow][nCol] = 1;
                        q.push({nRow, nCol});
                    }
                }
                
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int isLand = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int row = 0; row < n; row++){
            for (int col = 0; col < m; col++){
                if(!visited[row][col] && grid[row][col] == '1'){
                    isLand++;
                    BFS(row, col, grid, visited);
                }
            }
        }
        return isLand;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << "Island: " << ans << '\n';
    }
    return 0;
}