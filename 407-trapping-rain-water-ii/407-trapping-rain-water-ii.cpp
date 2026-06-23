class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int n = heightMap.size();
        if (n == 0) return 0;
        int m = heightMap[0].size();
        if (m == 0) return 0;

        vector<vector<bool>> visited(n, vector<bool>(m, false));
        priority_queue<pair<int, pair<int,int>>, 
                       vector<pair<int, pair<int,int>>>, 
                       greater<>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({heightMap[i][0], {i, 0}});
            pq.push({heightMap[i][m-1], {i, m-1}});
            visited[i][0] = visited[i][m-1] = true;
        }
        for (int j = 1; j < m-1; j++) {
            pq.push({heightMap[0][j], {0, j}});
            pq.push({heightMap[n-1][j], {n-1, j}});
            visited[0][j] = visited[n-1][j] = true;
        }

        int water = 0;
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        while (!pq.empty()) {
            auto [h, cell] = pq.top(); pq.pop();
            int x = cell.first, y = cell.second;

            for (auto& d : dirs) {
                int nx = x + d[0], ny = y + d[1];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited[nx][ny]) continue;
                visited[nx][ny] = true;
                if (heightMap[nx][ny] < h)
                    water += h - heightMap[nx][ny];
                pq.push({max(h, heightMap[nx][ny]), {nx, ny}});
            }
        }
        return water;
    }
};
