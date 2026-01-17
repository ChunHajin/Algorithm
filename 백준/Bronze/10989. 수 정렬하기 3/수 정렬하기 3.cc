#include <iostream>
using namespace std;

int countNum[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    
    for (int i=0; i<N; i++) {
        int n;
        cin >> n;
        countNum[n]++;
    }

    for (int i=0; i<=10000; i++) {
        while (countNum[i] > 0) {
            cout << i << "\n";
            countNum[i]--;
        }
    }

    return 0;
}