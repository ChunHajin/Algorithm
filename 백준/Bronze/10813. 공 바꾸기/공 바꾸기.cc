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

    for (int i=0; i<N; i++) {
        arr[i] = i+1;
    }

    for (int n=0; n<M; n++) {
        int i, j, temp;
        cin >> i >> j;

        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }

    for (int i=0; i<N; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}