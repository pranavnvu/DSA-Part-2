// vector<int> top(int v, vector<int> adj){
//     vector<int> ans;
//     vector<int>indegreee(v,0);

//     for(int i=0;i<v;i++){
//         for(int j=0;j<adj[i].size();j++){
//             indegreee[adj[i][j]]++;
//         }
//     }

//     queue<int>q;

//     for(int i=0;i<v;i++){
//         if(!indegree){
//             q.push(i);
//         }
//     }

//     while(!q.empty()){
//         int node = q.front();
//         q.pop();
//         ans.push_back(node);

//         for(int i=0;i<adj[node].size();i++){
//             indegreee[adj[node][i]]--;
//             if(!indegreee[adj[node][i]])
//             q.push(adj[node][i]);
//         }
//     return ans;
// }