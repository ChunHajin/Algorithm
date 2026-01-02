#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int C[6];
    for (int i=0; i<6; i++) {
        cin >> C[i];
    }
    sort(C, C+6);
    int T, P;
    cin >> T >> P;

    int a = 0;
    for (int i=0; i<6; i++) {
        a += (C[i] + T - 1) / T;
    }
    int b = N / P;
    int c = N % P;

    cout << a << " \n" << b << " " << c << "\n";
    
    return 0;
}