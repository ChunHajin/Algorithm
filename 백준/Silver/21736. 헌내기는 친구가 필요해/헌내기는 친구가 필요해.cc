#include <iostream>
#include <queue>
using namespace std;

int N, M;

int c = 0;

const int MAX = 601;
char map[MAX][MAX];
int visited[MAX][MAX];

int dr[] = {0, 0, 1, -1};
int dc[] = {1, -1, 0, 0};

struct Element {
    int r, c;
};

void bfs(Element start) {
    queue<Element> q;
    visited[start.r][start.c] = 1;
    q.push(start);

    while (!q.empty()) {
        Element curr = q.front();
        q.pop();

        for (int i=0; i<4; i++) {
            Element next;
            next.r = curr.r + dr[i];
            next.c = curr.c + dc[i];

            if (next.r >= 0 && next.r < N && next.c >= 0 && next.c < M) {
                if (visited[next.r][next.c] || map[next.r][next.c] == 'X') continue;
                if (map[next.r][next.c] == 'P') {
                    c++;
                }
                q.push(next);
                visited[next.r][next.c] = 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    Element start;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'I') {
                start.r = i;
                start.c = j;
            }
        }
    }

    bfs(start);

    if (c == 0) cout << "TT" << "\n";

    else cout << c << "\n";
    
    return 0;
}