#include <iostream>
#include <string>
using namespace std;

int main() {
    long long X;
    int N;
    long long result = 0;
    cin >> X;
    cin >> N;

    for (int i=0; i<N; i++) {
        long a;
        int b;
        cin >> a >> b;
        result += a*b;
    }

    if (X==result) {cout << "Yes" << endl;}
    else {cout << "No" << endl;}

    return 0;
}