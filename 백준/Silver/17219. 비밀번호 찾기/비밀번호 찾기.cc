#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    // 해시 맵 사용
    unordered_map<string, string> memo;

    string site, password;
    for (int i = 0; i < N; i++) {
        cin >> site >> password;
        memo[site] = password;
    }

    string query;
    for (int i = 0; i < M; i++) {
        cin >> query;
        cout << memo[query] << "\n";
    }

    return 0;
}