// #include<bits/stdc++.h>

// using namespace std;

// #define N 200005

// int n, m;
// vector<int> adj[N];
// int indegree[N];

// int main() {
//     cin >> n >> m;

//     for(int i = 1; i <= m; i++){
//         int u, v;
//         cin >> u >> v;

//         adj[u].push_back(v);
//         indegree[v]++;
//     }

//     queue<int> q;
//     for(int i = 1; i <= n; i++){
//         if(indegree[i]==0){
//             q.push(i);
//         }
//     }

//     vector<int> topological_order;

//     while(!q.empty()){
//         int u = q.front();
//         q.pop();

//         topological_order.push_back(u);

//         for(int v: adj[u]){
//             indegree[v]--;
//             if(indegree[v]==0){
//                 q.push(v);
//             }
//         }
//     }

//     if(topological_order.size()!=n){
//         cout << "IMPOSSIBLE\n";
//     }
//     else {
//         for(int node: topological_order){
//             cout << node << " ";
//         }    
//         cout << endl;
//     }
    
//     return 0;
// }


//DFS IMPLEMENTATION:
#include<bits/stdc++.h>

using namespace std;

#define N 200005

int n, m;
vector<int> adj[N];
int visited[N];
vector<int> ans;
bool impo = false;

void dfs(int u){
    // if(visited[u] == 1){
    //     impo = true;
    // }
    visited[u] = 1; 

    for(int v: adj[u]){
         if(visited[v] == 1) {
            impo = true;
            continue;
         }
         if(visited[v] == 2) continue;
         dfs(v);
    }

    visited[u] = 2;
    ans.push_back(u);
}

void topological_sort(){
    ans.clear();
    for(int i = 1; i <= n; i++){
        if(visited[i] == 0){
            dfs(i);
        }
    }

    reverse(ans.begin(), ans.end());
}

int main() {
    cin >> n >> m;
    impo = false;//in case there are multiple test cases
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    topological_sort();

    if(impo){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        for(int node: ans){
            cout << node << " ";
        }cout << endl;
    }



    return 0;
}

