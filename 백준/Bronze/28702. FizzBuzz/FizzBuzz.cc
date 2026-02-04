#include <iostream>
#include <string>
using namespace std;

string s[3];
int n[3] = {0, 0, 0};
int ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for (int i=0; i<3; i++) {
        cin >> s[i];
        if (s[i][0] >= '0' && s[i][0] <= '9') {
            n[i] = stoi(s[i]);
            ans = n[i] + (3-i);
            break;
        }
    }

    if (ans % 15 == 0) {
        cout << "FizzBuzz" << "\n";
    }
    else if (ans % 3 == 0) {
        cout << "Fizz" << "\n";
    }
    else if (ans % 5 == 0) {
        cout << "Buzz" << "\n";
    }
    else {
        cout << ans << "\n";
    }

    return 0;
}