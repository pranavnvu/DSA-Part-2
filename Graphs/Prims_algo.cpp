// int spanning tree(int v, vector<vector<int,int>>adj[]){
//     priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>pq;
//     vector<int> parent(v);
//     vector<bool> mst(v,0);
//     int cost = 0;

//     pq.push({0,{0,-1}});

//     while(!pq.empty()){
//         int wt = pq.top().first;
//         int node = pq.top().second.first;
//         int par = pq.top().second.second;
//         pq.pop();

//         if(!mst[node]){
//             mst[node] = 1;
//             cost += wt;
//             parent[node] = par;
//         }

//         for(int i=0;i<adj[node].size();i++){
//             int nbr = adj[node][i].first;
//             int edgewt = adj[node][i].second;
//             if(!mst[nbr] && edgewt < pq.top().first){
//                 pq.push({edgewt,{nbr,node}});
//                 }
//         }
//     }
//     return cost;
// }