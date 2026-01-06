#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    queue<int> q;
    vector<int> v;

    for (int i=1; i<=N; i++) {
        q.push(i);
    }

    while (!q.empty()) {
        for (int i=1; i<K; i++) {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    
    cout << "<";
    for (int i=0; i<N; i++) {
        cout << v[i];
        if (i != N-1) cout << ", ";
    }
    cout << ">" << "\n";

    return 0;
}