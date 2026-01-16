#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    if (N == 1) {
        cout << 1;
        return 0;
    }

    long long max_room = 1;
    int layer = 1;

    while (N > max_room) {
        max_room += (6 * layer);
        layer++;
    }

    cout << layer;

    return 0;
}