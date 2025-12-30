#include <iostream>
#include <string>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i=0; i<N; i++) {

        for (int j=N-i-1; j>0; j--) {
            cout << " ";
        }

        for (int k=2*i+1; k>0; k--) {
            cout << "*";
        }

        cout << "\n";
    }

    for (int i=N-1; i>0; i--) {

        for (int j=N-i; j>0; j--) {
            cout << " ";
        }

        for (int k=2*i-1; k>0; k--) {
            cout << "*";
        }

        cout << "\n";
    }

    cout << "\n";

    return 0;
}