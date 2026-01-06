#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    while (N--) {
        bool isVPS = true;
        stack<char> s;
        string a;
        cin >> a;
        for (char c : a) {
            if (c == '(') {
                s.push(c);
            }
            if (c == ')') {
                if (s.empty()) {
                    isVPS = false;
                    break;
                }
                else {
                    s.pop();
                }
            }
        }
        if (isVPS && s.empty()) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}