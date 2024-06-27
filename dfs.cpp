#include <bits/stdc++.h>
using namespace std;

// Depth-First Search function
void dfs(vector<vector<int>>& graph, int node, vector<bool>& visited) {
    visited[node] = true;  // Mark the current node as visited
    cout << node << " ";   // Output the current node (you can modify this for your needs)

    // Traverse all adjacent nodes
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(graph, neighbor, visited);  // Recursively call dfs for unvisited neighbors
        }
    }
}

// Example usage
int main() {
    int numNodes = 6;  // Number of nodes in the graph

    // Example graph represented as adjacency list
    vector<vector<int>> graph(numNodes);

    // Adding edges to the graph (undirected graph)
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[1].push_back(3);
    graph[1].push_back(4);
    graph[2].push_back(0);
    graph[2].push_back(5);
    graph[3].push_back(1);
    graph[4].push_back(1);
    graph[5].push_back(2);

    // Visited array to keep track of visited nodes
    vector<bool> visited(numNodes, false);

    // Perform DFS traversal starting from node 0
    cout << "DFS traversal starting from node 0:\n";
    dfs(graph, 0, visited);

    return 0;
}

