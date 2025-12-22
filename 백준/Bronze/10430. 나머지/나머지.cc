#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    int C;
    cin >> A >> B >> C;
    int result01 = (A+B)%C;
    int result02 = ((A%C)+(B%C))%C;
    int result03 = (A*B)%C;
    int result04 = ((A%C)*(B%C))%C;
    cout << result01 << "\n" << result02 << "\n" << result03 << "\n" << result04;
    return 0;
}