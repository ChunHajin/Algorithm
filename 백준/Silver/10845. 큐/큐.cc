#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    queue<int> q;
    while (N--) {
        string in;
        cin >> in;
        int t = 0;
        if (in == "push") {
            int a;
            cin >> a;
            q.push(a);
            continue;
        } 
        else if (in == "pop") {
            if (q.empty()) {
                t = -1;
            }
            else {
                t = q.front();
                q.pop();
            }
        }
        else if (in == "size") {
            t = q.size();
        }
        else if (in == "empty") {
            t = q.empty();
        }
        else if (in == "front") {
            if (q.empty()) {
                t = -1;
            }
            else {
                t = q.front();
            }
        }
        else if (in == "back") {
            if (q.empty()) {
                t = -1;
            }
            else {
                t = q.back();
            }
        }

        cout << t << "\n";
    }

    return 0;
}