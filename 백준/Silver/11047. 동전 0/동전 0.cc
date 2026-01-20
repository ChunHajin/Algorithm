#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> v(N);

    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i=N-1; i>=0; i--) {
        cnt += K / v[i];
        K %= v[i];
    }

    cout << cnt << "\n";

    return 0;
}