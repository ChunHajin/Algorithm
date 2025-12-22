#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int result;
    int max;
    int same;

    if (A==B && B==C) {
        result = 10000 + (A*1000);
    }
    
    else if (A==B || B==C || C==A) {
        if (A==B) {same=A;}
        else {same=C;}
        result = 1000 + (same*100);
    }

    else {
        max = A;
        if (max<B) {max=B;}
        if (max<C) {max=C;}
        result = max*100;
    }

    cout << result << endl;

    return 0;
}