#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

const int MAX = 1001;
int map[MAX][MAX];
int dist[MAX][MAX];
int n, m;

int dr[] = {0, 0, 1, -1};
int dc[] = {1, -1, 0, 0};

struct Element {
    int r, c;
};

void bfs(int startR, int startC) {
    queue<Element> q;
    Element tmp;
    tmp.r = startR;
    tmp.c = startC;
    q.push(tmp);
    dist[startR][startC] = 0;

    while (!q.empty()) {
        Element curr = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nr = curr.r + dr[i];
            int nc = curr.c + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                if (dist[nr][nc] == -1 && map[nr][nc] == 1) {
                    dist[nr][nc] = dist[curr.r][curr.c] + 1;
                    q.push({nr, nc});
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    int targetR, targetC;

    memset(dist, -1, sizeof(dist));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
            
            if (map[i][j] == 2) {
                targetR = i;
                targetC = j;
            }
            else if (map[i][j] == 0) {
                dist[i][j] = 0;
            }
        }
    }

    bfs(targetR, targetC);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}