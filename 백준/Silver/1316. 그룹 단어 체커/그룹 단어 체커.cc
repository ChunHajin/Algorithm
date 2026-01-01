#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int count = 0;

    for (int i=0; i<N; i++) {
        string words;
        cin >> words;

        bool isGroup = true;
        vector<char> history;
        
        for (int j=0; j<words.size(); j++) {
            if (j == 0 || words[j] != words[j-1]) {
                if (find(history.begin(), history.end(), words[j]) != history.end()) {
                    isGroup = false;
                    break;
                }
                history.push_back(words[j]);
            }
        }
        if (isGroup) {count++;}
    }

    cout << count << "\n";

    return 0;
}