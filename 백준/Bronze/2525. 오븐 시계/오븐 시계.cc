#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    int C;
    cin >> A >> B;
    cin >> C;

    int plusH = (B+C)/60;

    if (plusH) {
        A += plusH;
        B = (B+C)-plusH*60;
        if (A>23) {A-=24;}
    }

    else {
        B += C;
    }

    cout << A << " " << B << endl;

    return 0;
}