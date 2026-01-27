#include <iostream>
using namespace std;

long long P[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    P[1] = 1;
    P[2] = 1;
    P[3] = 1;
    P[4] = 2;
    P[5] = 2;

    for (int i=6; i<101; i++) {
        P[i] = P[i-1] + P[i-5];
    }

    int T;
    cin >> T;

    while (T--) {
        int x;
        cin >> x;
        cout << P[x] << "\n";
    }

    return 0;
}