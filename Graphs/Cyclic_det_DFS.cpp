// bool bfs(int node, int parent, vector<int> &visited, vector<int>adj){
//     visited[node] = 1;

//         for(int j=0;j<adj[node];j++){
//             if(parent == adj[node][j]){
//                 continue;
//             }
//             if(visited[adj[node][j]]){
//                 return 1;
//             }
//             if(bfs(adj[node][j], node, visited, adj)){
//              return 1;
//             }
//         }
//     }
// }
// bool iscycle(int v, vector<int> adj){
//     vector<bool>visited(v,0);
//     return bfs(0,-1,visited,adj);
// }