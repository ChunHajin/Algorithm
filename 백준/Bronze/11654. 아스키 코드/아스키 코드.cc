#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char x;
    cin >> x;

    int y = static_cast<int>(x);
    cout << y << "\n";

    return 0;
}