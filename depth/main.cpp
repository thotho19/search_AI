// C++ program to print DFS traversal from
// a given vertex in a  given graph
#include <bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
 
// Graph class represents a directed graph
// using adjacency list representation
class Graph
{
public:
    map<int, bool> visited;
    map<string, list<char>> adj;
 
    // function to add an edge to graph
    void addEdge(string v, string w){
    auto it = adj.begin();
    adj.insert(it , {v , w});
   // adj[v].push_back(w); // Add w to v’s list.
}
 
    // DFS traversal of the vertices
    // reachable from v
    // void DFS(int v){
    // // Mark the current node as visited and
    // // print it
    // visited[v] = true;
    // cout << v << " ";
 
    // // Recur for all the vertices adjacent
    // // to this vertex
    // list<int>::iterator i;
    // for (i = adj[v].begin(); i != adj[v].end(); ++i)
    //     if (!visited[*i])
    //         DFS(*i);
    // }
};


 
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g;
    g.addEdge("A", "B");
    // g.addEdge("A", "C");
    // g.addEdge("A", "D");
 
    // cout << "Following is Depth First Traversal"
    //         " (starting from vertex 2) \n";
    // g.DFS(0);
 
    return 0;
}
 
// improved by Vishnudev C