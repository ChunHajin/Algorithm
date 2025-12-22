#include <iostream>
#include <string>
using namespace std;

int main() {
    int year;
    cin >> year;
    
    bool con1 = year%4 == 0;
    bool con2 = year%100 == 0;
    bool con3 = year%400 == 0;

    if ((con1 && !con2) || (con3)) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}