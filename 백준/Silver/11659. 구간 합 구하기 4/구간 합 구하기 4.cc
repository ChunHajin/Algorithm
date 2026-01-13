#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<long long> S(N+1, 0);

    for (int i=1; i<=N; i++) {
        int n;
        cin >> n;
        S[i] = S[i-1] + n;
    }

    while (M--) {
        int i, j;
        cin >> i >> j;
        cout << S[j] - S[i-1] << "\n";
    }

    return 0;
}