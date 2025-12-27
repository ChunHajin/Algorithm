#include <iostream>
#include <string>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string A, B;
    cin >> A >> B;

    swap(A[0], A[2]);
    swap(B[0], B[2]);

    int x = stoi(A);
    int y = stoi(B);

    if (x>y) {cout << x << "\n";}
    else { cout << y << "\n";}
    return 0;
}