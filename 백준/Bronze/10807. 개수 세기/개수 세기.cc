#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, v, target;
    cin >> N;
    
    vector<int> arr(N);

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    cin >> target;

    int count = 0;

    for (int i=0; i<N; i++) {
        if (arr[i] == target) {count++;}
    }

    cout << count << "\n";

    return 0;
}