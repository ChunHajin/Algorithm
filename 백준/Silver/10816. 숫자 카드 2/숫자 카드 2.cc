#include <iostream>
#include <vector>
#include <string>
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
    sort(v.begin(), v.end());

    int M;
    cin >> M;
    vector<int> w(M);
    for (int i=0; i<M; i++) {
        cin >> w[i];
        auto low = lower_bound(v.begin(), v.end(), w[i]);
        auto up = upper_bound(v.begin(), v.end(), w[i]);
        cout << up - low << " ";
    }
    cout << "\n";

    return 0;
}