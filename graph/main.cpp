#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{

    
    vector<int> open = adj[1];
    vector<int> close;
    int i = 0;
    while(open.size() != 0){
        if(open[i] == 1)
            {
                cout<<"Goal has been found";
                break;
            }
        for(int j = 0 ; j < close.size() ; j++){
            if(open[i] == close[j]);
                cout<<"Node is exists";
            break;
        }
        // Check if has children
        for(int v = 0 ; v < V ; ++v){
        cout << "\n Adjacency list of vertex \n"<<v;
            for(int j = 0 ; j < adj[v].size() ; ++j)
                cout << "-> " << adj[v][j];
                printf("\n");
        }
    i++;
    }

    // for (int v WW= 0; v < V; ++v)
    // {
    //     cout << "\n Adjacency list of vertex \n"
    //          << v;
    //     for (int j = 0 ; j < adj[v].size(); j++)
    //        cout << "-> " << adj[v][j];
    //     printf("\n");
    // }
}

int main(){
    int V = 4;
    vector<int> adj[V];
    addEdge(adj , 0 , 1);
    addEdge(adj , 0 , 2);
    addEdge(adj , 0 , 3);

    printGraph(adj, V);
    return 0;
}









// addEdge(adj, 0, 1);
//     addEdge(adj, 0, 2);
//     addEdge(adj, 0, 3);
//     addEdge(adj, 1, 4);
//     addEdge(adj, 1, 5);
//     addEdge(adj, 2, 5);
//     addEdge(adj, 2, 6);
//     addEdge(adj, 3, 6);
//     addEdge(adj, 3, 7);
//     addEdge(adj, 4, 8);
//     addEdge(adj, 4, 9);
//     addEdge(adj, 5, 10);
//     addEdge(adj, 6, 11);
//     addEdge(adj, 6, 12);
//     addEdge(adj, 7, 13);
//     addEdge(adj, 7, 14);