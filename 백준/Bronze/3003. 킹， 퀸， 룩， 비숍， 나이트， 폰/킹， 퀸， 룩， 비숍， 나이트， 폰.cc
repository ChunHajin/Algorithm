#include <iostream>
#include <string>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int chess[] = {1, 1, 2, 2, 2, 8};

    int input[6];

    cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];

    for (int i=0; i<6; i++) {
        int result = chess[i] - input[i];
        cout << result << " ";
    }

    cout << "\n";

    return 0;
}