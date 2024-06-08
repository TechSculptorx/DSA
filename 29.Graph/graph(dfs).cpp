#include <iostream>
using namespace std;

void print(int **edge, int n, int starting_vertex, bool *visited) {
    cout << starting_vertex << endl;
    visited[starting_vertex] = true;
    for (int i = 0; i < n; i++) {
        if (i == starting_vertex) {
            continue;
        }
        if (edge[starting_vertex][i] == 1) {
            if (visited[i]) {
                continue;
            }
            print(edge, n, i, visited);
        }
    }
}

int main () {
    int n, e;
    cin >> n >> e;

    int **edge = new int*[n];
    for (int i = 0; i < n; i++) {
        edge[i] = new int[n];
        for (int j = 0; j < n; j++) {
            edge[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++) {
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
