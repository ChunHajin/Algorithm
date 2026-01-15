#include <iostream>
#include <algorithm>
using namespace std;

int s[301];
int d[301];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    d[1] = s[1];
    d[2] = s[1] + s[2];
    d[3] = max(s[1] + s[3], s[2] + s[3]);

    for (int i = 4; i <= n; i++) {
        d[i] = max(d[i - 3] + s[i - 1], d[i - 2]) + s[i];
    }

    cout << d[n] << endl;

    return 0;
}