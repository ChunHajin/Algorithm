#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int remainders[42] = {0}; 
    int input;

    for (int i = 0; i < 10; i++) {
        cin >> input;
        remainders[input % 42] = 1; 
    }

    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (remainders[i] == 1) {
            count++;
        }
    }

    cout << count << "\n";
    
    return 0;
}