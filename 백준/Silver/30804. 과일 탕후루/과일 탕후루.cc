#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> v(N);

    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    int cnt[10] = {0}; // left, right 사이의 각 과일 개수
    int currCnt = 0; // 현재 과일 종류 개수
    int left = 0;
    int maxLen = 0; // 가장 긴 구간 (목표 값) 기록

    // left, right 포인터로 목표 범위 지정
    for (int right=0; right<N; right++) {
        // right 조정 (확장)
        if (cnt[v[right]] == 0) {
            currCnt++;
        }
        cnt[v[right]]++;

        // left 조정 (축소)
        while (currCnt > 2) {
            cnt[v[left]]--;
            if (cnt[v[left]] == 0) {
                currCnt--;
            }
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }

    cout << maxLen << "\n";
    
    return 0;
}