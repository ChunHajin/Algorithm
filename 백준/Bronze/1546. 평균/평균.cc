#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<double> arr(N);
    
    double max = 0;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
        if (arr[i] > max) {max = arr[i];}
    }

    double result = 0;
    for (int i=0; i<N; i++) {
        result += (arr[i] / max) * 100;
    }

    cout << result / (N+0.0) << "\n";

    return 0;
}