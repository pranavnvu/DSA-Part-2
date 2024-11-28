#include<iostream>
#include<vector>
using namespace std;
int main(){
    // undirected weighted graph
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
    return 0;
}

// undirected wweighted graph

// vector<pair<int,int>>AdjList[vertex]

// AdjList[u].push_back(make_pair(v,weight))
// AdjList[v].push_back(make_pair(u,weight))

// AdjList[i][j].first " " AdjList[i][j].second