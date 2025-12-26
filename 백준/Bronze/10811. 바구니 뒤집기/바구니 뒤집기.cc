#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> arr(N);

    for (int n=0; n<N; n++) {
        arr[n] = n+1;
    }

    for (int n=0; n<M; n++) {
        int i, j;
        cin >> i >> j;
        while (i<j) {
            swap(arr[i-1], arr[j-1]);
            i++;
            j--;
        }
    }

    for (int n=0; n<N; n++) {
        cout << arr[n] << " ";
    }

    return 0;
}