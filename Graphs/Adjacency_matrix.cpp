#include<iostream>
#include<vector>
using namespace std;
int main(){
    // undirected unweighted graph
    int vertex,edges,u,v;

    cout <<"Enter the number of vertex : ";
    cin >> vertex;
    cout << "Enter the number of edges : ";
    cin >> edges;

    vector<vector<bool>>AdjMat(vertex, vector <bool> (vertex,0));

    for(int i=0;i<edges;i++){
        cin >> u >> v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;
    }
    cout << endl;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout << AdjMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// undirected unweighted graph

// for(int i=0;i<edges;i++){
//         cin >> u >> v;
//         AdjMat[u][v] = 1;
//         AdjMat[v][u] = 1;
//     }
 
// undirected weighted graph

// for(int i=0;i<edges;i++){
//         cin >> u >> v;
//         AdjMat[u][v] = weight;
//         AdjMat[v][u] = weight;
//     }

// directed unweighted graph

// for(int i=0;i<edges;i++){
//         cin >> u >> v;
//         AdjMat[u][v] = 1;
//     }

// directed weighted graph

// for(int i=0;i<edges;i++){
//         cin >> u >> v;
//         AdjMat[u][v] = weight;
//     }
