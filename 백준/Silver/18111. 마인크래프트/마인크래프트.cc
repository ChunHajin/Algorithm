#include <iostream>
using namespace std;

int map[501][501];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, B;
    cin >> N >> M >> B;

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> map[i][j];
        }
    }

    int ans_t = 1e9;
    int ans_h = 0;

    int h = 0;
    while (h <= 256) {
        int cur_B = B;
        int cur_t = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                int diff = map[i][j] - h;

                // 깎는다 (2초)
                if (diff > 0) {
                    cur_t += diff * 2;
                    cur_B += diff;
                }
                // 쌓는다 (1초)
                else if (diff < 0) {
                    cur_t -= diff;
                    cur_B += diff;
                }
            }
        }
        if (cur_B >= 0) {
            if (cur_t < ans_t) {
                ans_t = cur_t;
                ans_h = h;
            }
            else if (cur_t == ans_t) {
                if (h > ans_h) {
                    ans_t = cur_t;
                    ans_h = h;
                }
            }
        }
        h++;
    }

    cout << ans_t << " " << ans_h << "\n";

    return 0;
}