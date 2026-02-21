#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        string s;
        getline(cin, s);

        if (s == ".") break;

        stack<char> st;
        bool isBalanced = true;

        for (char c : s) {
            if (c == '(' || c == '[') {
                st.push(c);
            }
            else if (c == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    isBalanced = false;
                    break;
                }
            }
            else if (c == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else {
                    isBalanced = false;
                    break;
                }
            }
        }

        if (isBalanced && st.empty()) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}