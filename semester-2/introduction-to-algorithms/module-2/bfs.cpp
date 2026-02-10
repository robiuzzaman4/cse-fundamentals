#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];   // update size based on input constrains
bool visited[1005] = {false}; // update size based on input constrains

// bfs - breadth first search
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (int child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    bfs(0); // root 0 node

    return 0;
}

// Time Complexity of BSS - O(N+E) - N=Node, E=Edge
// Space Complexity of BSS - O(N+E) - E=Edge, Node=N