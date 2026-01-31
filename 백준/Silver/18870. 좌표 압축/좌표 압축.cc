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

    vector<int> copy = v;

    sort(copy.begin(), copy.end());
    // unique는 중복값(남는 값)을 뒤로 밀어버림 -> erase로 쓰레기 범위 제거
    copy.erase(unique(copy.begin(), copy.end()), copy.end());

    for (int i=0; i<N; i++) {
        // lower_bound는 목표의 인덱스 반환
        auto it = lower_bound(copy.begin(), copy.end(), v[i]);
        cout << (it - copy.begin()) << " ";
    }

    return 0;
}