#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (b > a/2) {
        b = a - b;
    }

    int C = 1;
    for (int i=1; i<=b; i++) {
        C *= (a - i + 1);
        C /= i;
    }
    
    cout << C << "\n";    

    return 0;
}