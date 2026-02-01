#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int visited[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    if (N >= K) {
        cout << N - K << "\n";
        return 0;
    }

    queue<int> q;
    q.push(N);
    visited[N] = 1;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == K) {
            // 시작점에서 미방문 구분용 +1
            // 때문에 최종 출력에서 -1
            cout << visited[cur] - 1 << "\n";
            break;
        }

        // 미로찾기 비슷하게 접근함
        int next_pos[3] = {cur - 1, cur + 1, cur * 2};

        for (int next : next_pos) {
            if (next >= 0 && next <= 100000 && visited[next] == 0) {
                visited[next] = visited[cur] + 1;
                q.push(next);
            }
        }
    }


    return 0;
}