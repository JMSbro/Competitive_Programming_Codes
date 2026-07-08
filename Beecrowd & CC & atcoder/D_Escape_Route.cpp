#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
// 0=up,1=down,2=left,3=right
const int dx[4]    = {-1, 1,  0, 0};
const int dy[4]    = { 0, 0, -1, 1};
const char dir_ch[4] = {'^','v','<','>'};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W;
    cin >> H >> W;
    vector<string> G(H);
    for(int i=0;i<H;i++) cin >> G[i];

    vector<vector<int>> dist(H, vector<int>(W, INF));
    vector<vector<char>> arrow(H, vector<char>(W, 0));
    queue<pair<int,int>> q;

    // Start BFS from all exits
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(G[i][j]=='E'){
                dist[i][j] = 0;
                q.emplace(i,j);
            }
        }
    }

    // Multi-source BFS
    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();
        for(int d=0;d<4;d++){
            int nx = x+dx[d], ny = y+dy[d];
            if(nx<0||nx>=H||ny<0||ny>=W) continue;
            if(G[nx][ny]!='.') continue;           // only corridor cells
            if(dist[nx][ny]!=INF) continue;        // already visited

            dist[nx][ny] = dist[x][y] + 1;
            // To go FROM (nx,ny) TO (x,y), use opposite of d:
            arrow[nx][ny] = dir_ch[d ^ 1];
            q.emplace(nx,ny);
        }
    }

    // Output: walls and exits unchanged, corridors get their arrow
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(G[i][j]=='.'){
                cout << arrow[i][j];
            } else {
                cout << G[i][j];
            }
        }
        cout << "\n";
    }
    return 0;
}
