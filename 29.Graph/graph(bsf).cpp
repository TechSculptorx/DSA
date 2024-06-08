#include <iostream>
using namespace std;
#include <queue>

void print(int **edge, int n, int starting_vertex, bool *visited) {
    queue<int> pendingVertices;
    pendingVertices.push(starting_vertex);
    visited[starting_vertex] = true;


    while(!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        cout << currentVertex << endl;
        for (int i = 0; i < n; i++) {
            if (i == currentVertex) {
                continue;
            }
            if (edge[currentVertex][i] == 1 && !visited[i]) {
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    // Write your code here
    int n, m;
    cin >> n >> m;

    int **edge = new int*[n];
    for (int i = 0; i < n; i++) {
        edge[i] = new int[n];
        for (int j = 0; j < n; j++) {
            edge[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        int f, s;
        cin >> f >> s;
        edge[f][s] = 1;
        edge[s][f] = 1;
    }

    bool *visited = new bool[n];

    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }

    print(edge, n, 0, visited);

    for (int i = 0; i < n; i++) {
        delete [] edge[i];
    }

    delete [] edge;

    delete [] visited;
}
