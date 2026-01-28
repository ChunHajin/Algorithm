#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

bool check(long long H) {
    long long t = 0;
    for (int i=N-1; i>=0; i--) {
        if (v[i] > H) {
            t += v[i] - H;
            if (t >= M) return true;
        }
        else {
            break;
        }
    }
    return t >= M;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    v.resize(N);

    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long low = 0;
    long long high = v[N-1];
    long long ans = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (check(mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}