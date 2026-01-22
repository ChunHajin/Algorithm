#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

vector<int> v[1001];
int visited[1001];

void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int next : v[node]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int next : v[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, V;
    cin >> N >> M >> V;

    for (int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i=1; i<=N; i++) {
        sort(v[i].begin(), v[i].end());
    }

    dfs(V);
    cout << "\n";

    memset(visited, false, sizeof(visited));

    bfs(V);
    cout << "\n";

    return 0;
}