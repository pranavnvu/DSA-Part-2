// vector<int> dijkastra(int v, vector<vector<int,int>>adj[], int s){
//     vector<bool>explore(v,0);
//     vector<int>dist(v, INT_MAX);
//     dist[s] = 0;

//     int count = v;
//     while(count--){
//         int node = -1;
//         int value = INT_MAX;

//         for(int i=0;i<v;i++){
//             if(!explore[i] && value > dist[i]){
//                 node = i;
//                 value = dist[i];
//             }
//         }
//         explore[node] = 1;
//         for(int j=0;j<adj[node].size();j++){
//             int neighbour = adj[node][j].first;
//             int weight = adj[node][j].second;
//             if(!explore[neighbour] && dist[neighbour] > dist[node] + weight){
//                 dist[neighbour] = dist[node] + weight;
//             }
//         }
//     }
//     return dist;
// }