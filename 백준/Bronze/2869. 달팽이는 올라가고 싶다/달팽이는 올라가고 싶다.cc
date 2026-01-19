#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, V;
    cin >> A >> B >> V;

    int q = (V-B) / (A-B);
    int r = (V-B) % (A-B);

    if (r == 0) {
        cout << q << "\n";
    }
    
    else {
        cout << q+1 << "\n";
    }

    return 0;
}