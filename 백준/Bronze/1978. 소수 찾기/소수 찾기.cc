#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> v(N);

    int count = 0;
    for (int i=0; i<N; i++) {
        cin >> v[i];
        if (v[i] == 1) continue;

        bool isPrime = true;
        for (int j=2; j<=v[i]/2; j++) {
            if (v[i] % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }    

    cout << count << "\n";

    return 0;
}