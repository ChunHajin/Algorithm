#include <iostream>
#include <string>
using namespace std;

string s[3];
int n[3] = {0, 0, 0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for (int i=0; i<3; i++) {
        cin >> s[i];
        if (s[i][0] >= '0' && s[i][0] <= '9') {
            n[i] = stoi(s[i]);
        }
    }

    int ans;
    for (int i=0; i<3; i++) {
        if (n[i] != 0) {
            ans = n[i] + (3-i);
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