#include <iostream>
using namespace std;

int main() {
    int inputYear;
    int outputYear;
    cin >> inputYear;
    if (inputYear >= 1000 && inputYear <= 3000) {
        outputYear = inputYear - 543;
        cout << outputYear << endl;
    }
    return 0;
}