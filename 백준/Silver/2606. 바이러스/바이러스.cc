#include <iostream>
using namespace std;

#define MAX_VERTICES 101
int visited[MAX_VERTICES];

typedef struct GraphType {
    int n;
    int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;

void init(GraphType *g) {
    int r, c;
    g->n = 0;
    for (r=0; r<MAX_VERTICES; r++) {
        for (c=0; c<MAX_VERTICES; c++) {
            g->adj_mat[r][c] = 0;
        }
    }
}

void insert_vertex(GraphType *g, int v) {
    g->n++;
}

void insert_edge(GraphType *g, int start, int end) {
    g->adj_mat[start][end] = 1;
    g->adj_mat[end][start] = 1;
}

void dfs_mat(GraphType *g, int v) {
    visited[v] = true;
    for (int w=0; w<=g->n; w++) {
        if (g->adj_mat[v][w] && !visited[w]) {
            dfs_mat(g, w);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    GraphType *g;
    g = (GraphType *)malloc(sizeof(GraphType));
    init(g);

    int A;
    cin >> A;

    for (int i=1; i<=A; i++) {
        insert_vertex(g, i);
    }

    int B;
    cin >> B;

    for (int i=0; i<B; i++) {
        int x, y;
        cin >> x >> y;
        insert_edge(g, x, y);
    }

    dfs_mat(g, 1);

    int count = 0;
    for (int i=2; i<=A; i++) {
        if (visited[i]) {
            count++;
        }
    }

    cout << count << "\n";
    
    free(g);
    return 0;
}