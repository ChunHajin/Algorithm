#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    vector<string> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    int minVal = 64;

    // 시작점 설정
    for (int i=0; i<=N-8; i++) {
        for (int j=0; j<=M-8; j++) {
            int Bcase = 0;
            
            // 시작점 기준 8x8 배열 순환
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {

                    if ((x+y)%2 == 0) {
                        if (v[i+x][j+y] != 'B') Bcase++;
                    } else {
                        if (v[i+x][j+y] != 'W') Bcase++;
                    }

                }
            }

            int currentMin = min(Bcase, 64-Bcase);
            if (currentMin < minVal) {
                minVal = currentMin;
            }

        }
    }

    cout << minVal << "\n";

    return 0;
}