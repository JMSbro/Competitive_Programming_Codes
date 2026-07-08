//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};


int main()
{
    optimize();

    int t;
    cin >> t;

    while(t--){

        int n , m;
        cin >> n >> m;

        int arr[n+1][m+1];
        for(int i = 1 ; i <= n ; i++){
            for(int j=1 ; j <= m ; j++){
                cin >> arr[i][j];
            }
        }

        long long ans = 0;
        
        vector<vector<int>> visited(n+1,vector<int>(m+1,0));

        for(int i = 1 ; i <= n ; i++){
            for(int j=1 ; j <= m ; j++){

                if(visited[i][j] || arr[i][j] == 0) continue;

                queue<pair<int,int>> q;
                q.push({i,j});
                visited[i][j] = 1;
                long long sum = 0;
                sum += 1LL*arr[i][j];

                while(!q.empty()){
                    pair<int,int> u = q.front();
                    int r = u.first;
                    int c = u.second;

                    q.pop();

                    for(int i = 0 ; i < 4 ; i++){
                        int a = r + dx[i];
                        int b = c + dy[i];

                        if(a >= 1 && a <= n && b >= 1 && b <= m){
                            if(visited[a][b] || arr[a][b] == 0) continue;{
                                q.push({a,b});
                                visited[a][b] = 1;
                                sum += arr[a][b];
                            }
                        }

                    }
                    ans = max(ans,sum);              
                }
            }
        }

        cout << ans << endl;
        
    }

    return 0;
}
