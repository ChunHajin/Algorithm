#include <iostream>
#include <cstring>
using namespace std;

int M, N, K;
int map[51][51];
bool visited[51][51];

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void dfs(int x, int y) {
    visited[x][y] = true;
    for (int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < M && ny >= 0 && ny < N){
            if (!visited[nx][ny] && map[nx][ny] == 1) {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        cin >> M >> N >> K;

        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));

        for (int i=0; i<K; i++) {
            int X, Y;
            cin >> X >> Y;
            map[X][Y] = 1;
        }

        int cnt = 0;
        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) {
                if (map[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}