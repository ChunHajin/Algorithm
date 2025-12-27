#include <iostream>
#include <string>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    int count = 0;
    
    while (cin >> word) {
        count++;
    }

    cout << count << "\n";

    return 0;
}