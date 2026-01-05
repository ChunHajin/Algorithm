#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    stack<int> s;
    while (N--) {
        string in;
        cin >> in;
        int t = 0;
        if (in == "push") {
            int a;
            cin >> a;
            s.push(a);
            continue;
        } 
        else if (in == "pop") {
            if (s.empty()) {
                t = -1;
            }
            else {
                t = s.top();
                s.pop();
            }
        }
        else if (in == "size") {
            t = s.size();
        }
        else if (in == "empty") {
            t = s.empty();
        }
        else if (in == "top") {
            if (s.empty()) {
                t = -1;
            }
            else {
                t = s.top();
            }
        }

        cout << t << "\n";
    }

    return 0;
}