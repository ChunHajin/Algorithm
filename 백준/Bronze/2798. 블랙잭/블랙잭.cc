#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> v(N);

    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    int max = 0;

    for (int i=0; i<N-2; i++) {
        for (int j=i+1; j<N-1; j++) {
            for (int k=j+1; k<N; k++) {
                int t = v[i] + v[j] + v[k];
                if (t > max && t <= M) {
                    max = t;
                }
            }
        }
    }

    cout << max << "\n";

    return 0;
}