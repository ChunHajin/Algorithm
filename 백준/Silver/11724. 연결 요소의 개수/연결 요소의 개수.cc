#include <iostream>
#include <vector>
using namespace std;

int visited[1001];
vector<int> v[1001];

void dfs(const int node) {
    visited[node] = true;
    for (int x : v[node]) {
        if (!visited[x]) {
            dfs(x);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    for (int i=0; i<M; i++) {
        int x, y;
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    int ans = 0;
    for (int i=1; i<=N; i++) {
        if (!visited[i]) {
            dfs(i);
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}