#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (char c = 'a'; c <= 'z'; c++) {
        int first_index = -1;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c) {
                first_index = i;
                break;
            }
        }
        cout << first_index << " ";
    }
    
    return 0;
}