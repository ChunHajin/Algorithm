#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;

    cin >> N;

    vector<int> arr(N);

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    int min, max;
    min = arr[0];
    max = arr[0];

    for (int i=1; i<N; i++) {
        if (min > arr[i]) {min = arr[i];}
        if (max < arr[i]) {max = arr[i];}
    }

    cout << min << " " << max << "\n";

    return 0;
}