#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K;
    cin >> K;

    stack<int> s;

    for (int i=0; i<K; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            s.pop();
        }
        else {
            s.push(x);
        }
    }

    int cnt = 0;
    while (!s.empty()) {
        int t = s.top();
        s.pop();
        cnt += t;
    }

    cout << cnt << "\n";

    return 0;
}