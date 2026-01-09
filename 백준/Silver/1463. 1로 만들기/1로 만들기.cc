#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    cin >> X;

    vector<int> v(X+1);

    v[1] = 0;

    for (int i=2; i<=X; i++) {
        v[i] = v[i-1] + 1;

        if (i%2 == 0) {
            v[i] = min(v[i], v[i/2] + 1);
        }

        if (i%3 == 0) {
            v[i] = min(v[i], v[i/3] + 1);
        }
    }

    cout << v[X] << "\n";

    return 0;
}