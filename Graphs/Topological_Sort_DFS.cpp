// Graph should be directed acyclic graph (DAG)

// void dfs(int node, vector<bool>visited, vector<int>adj[], stack<int>s){
//     visited[node] = 1;
//     for(int i = 0; i < adj[node].size(); i++){
//         if(!visited[adj[node][i]]){
//             dfs(adj[node][i], visited, adj, s);
//         }
//     }
//     s.push(node);
// }

// vector<int> topo(int v, vector<int>adj){
//     vector<bool>visited(v,0);
//     stack<int>s;

//     for(int i=0;i<v;i++){
//         if(!visited[i]){
//             dfs(i, visited, adj, s);
//         }
    
//     vector<int>ans;
//     while(!s.empty()){
//         ans.push_back(s.top());
//         s.pop();
//     }
//     return ans;
// }