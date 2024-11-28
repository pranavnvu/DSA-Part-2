// bool bfs(vector<int> &visited, vector<int>adj){
//     queue<pair<int,int>>q;
//     visited[0] = 1;
//     q.push(make_pair(0,-1));

//     while(!q.empty()){
//         int node = q.front().first();
//         int parent = q.front().second();

//         for(int j=0;j<adj[node];j++){
//             if(parent == adj[node][j]){
//                 continue;
//             }
//             if(visited[adj[node][j]]){
//                 return 1;
//             }
//             visited[adj[node][j]] = 1;
//             q.push(make_pair(adj[node][j],node));
//         }
//     }
//     return 0;
// }
// bool iscycle(int v, vector<int> adj){
//     vector<bool>visited(v,0);
//     return bfs(visited,adj);
// }