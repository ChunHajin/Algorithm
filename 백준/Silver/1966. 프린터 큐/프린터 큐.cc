#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int C;
    cin >> C;

    while (C--) {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> q; // {중요도, 초기 인덱스}
        priority_queue<int> pq;  // 중요도만 저장 (최대 힙)

        for (int j = 0; j < N; j++) {
            int priority;
            cin >> priority;
            q.push({priority, j});
            pq.push(priority);
        }

        int count = 0;
        while (!q.empty()) {
            int current_p = q.front().first;
            int current_idx = q.front().second;
            q.pop();

            // 현재 문서가 가장 높은 중요도일 경우
            if (pq.top() == current_p) {
                count++;
                pq.pop();
                
                // 목표 문서인 경우 break
                if (current_idx == M) {
                    cout << count << "\n";
                    break;
                }
            } 
            // 더 중요한 문서가 있는 경우
            else {
                q.push({current_p, current_idx});
            }
        }
    }

    return 0;
}