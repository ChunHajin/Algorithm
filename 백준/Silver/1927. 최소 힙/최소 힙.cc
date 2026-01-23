#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> mHeap;

    for (int i=0; i<N; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            if (!mHeap.empty()) {
                cout << mHeap.top() << "\n";
                mHeap.pop();
            } 
            else {
                cout << 0 << "\n";
            }
        }
        else {
            mHeap.push(x);
        }
    }

    return 0;
}