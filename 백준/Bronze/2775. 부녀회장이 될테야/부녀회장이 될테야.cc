#include <iostream>
using namespace std;

int list[15][15];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i=1; i<15; i++) {
        list[0][i] = i;
    }

    for (int i=1; i<15; i++) {
        for (int j=1; j<15; j++) {
            list[i][j] = list[i][j-1] + list[i-1][j];
        }
    }

    for (int i=0; i<T; i++) {
        int k, n;
        cin >> k >> n;

        cout << list[k][n] << "\n";
    }

    return 0;
}