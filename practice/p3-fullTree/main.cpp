// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices
// reachable from s.
#include <iostream>
#include <list>
#include <vector>

using namespace std;

// This class represents a directed graph using
// adjacency list representation
class Graph
{
    int V; // No. of vertices
    // Pointer to an array containing adjacency
    // lists
    list<char> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<char>[V];
    }; // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w , char x , char y)
    {
        adj[v].push_back(y); // Add w to v’s list.
    }

    // prints BFS traversal from a given source s
    void BFS(int s , char ss)
    {
        // Mark all the vertices as not visited
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;

        // Create a open for BFS
        list<char> open;
        vector<char> close;
        // Mark the current node as visited and enopen it
        visited[s] = true;
        open.push_back(ss);

        // 'i' will be used to get all adjacent
        // vertices of a vertex
        list<char>::iterator i;

        while (!open.empty())
        {
            // Deopen a vertex from open and print it
            ss = open.front();
            // check if node was the goal
            if (ss == 3)
            {
                cout << "Goal has been found\n";
                for (int i = 0; i < close.size(); i++)
                {
                    cout << close[i] << "->";
                }
                close.push_back(ss);
                cout << ss;
                break;
            }

            close.push_back(ss);
            open.pop_front();

            // Get all adjacent vertices of the deopend
            // vertex s. If a adjacent has not been visited,
            // then mark it visited and enopen it
            for (i = adj[ss].begin(); i != adj[ss].end(); ++i)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    open.push_back(*i);
                }
            }
        }
    }
};

// Driver program to test methods of graph class
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1 , 'A', 'B');
    g.addEdge(0, 2 , 'A', 'C');
    g.addEdge(0, 3 , 'A', 'D');
    // g.addEdge(1, 4);
    // g.addEdge(1, 5);
    // g.addEdge(2, 5);
    // g.addEdge(2, 6);
    // g.addEdge(3, 6);
    // g.addEdge(3, 7);
    // g.addEdge(4, 8);
    // g.addEdge(4, 9);
    // g.addEdge(5, 10);
    // g.addEdge(6, 11);
    // g.addEdge(6, 12);
    // g.addEdge(7, 13);
    // g.addEdge(7, 14);

    g.BFS(0 , 'A');

    return 0;
}
