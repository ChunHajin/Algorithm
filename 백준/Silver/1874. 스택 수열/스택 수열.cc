#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> s;
    string result = "";
    int current = 1;

    for (int i = 0; i < n; i++) {
        int target;
        cin >> target;

        while (current <= target) {
            s.push(current++);
            result += "+\n";
        }

        if (!s.empty() && s.top() == target) {
            s.pop();
            result += "-\n";
        } 
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << result;

    return 0;
}