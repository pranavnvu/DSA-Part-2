#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int vertex,edges,u,v;

    cout << "Enter the number of edges : ";
    cin >> edges;
    cout << "Enter the number of vertex : ";
    cin >> vertex;

    vector<int>AdjList[vertex];

    for(int i=0;i<edges;i++){
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    cout << endl;

    for(int i=0;i<vertex;i++){
        cout << i << " -> ";
        for(int j=0;j<AdjList[i].size();j++){
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;

    vector<int>ans;
    queue<int>q;
    vector<bool>visited(vertex,0);
    int node;

    q.push(0);
    visited[0] = 1;

    while(!q.empty()){
        node = q.front();
        q.pop();
        ans.push_back(node);

        for(int i=0;i<AdjList[node].size();i++){
            if(!visited[AdjList[node][i]]){
                visited[AdjList[node][i]] = 1;
                q.push(AdjList[node][i]);
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

    return 0;
}

