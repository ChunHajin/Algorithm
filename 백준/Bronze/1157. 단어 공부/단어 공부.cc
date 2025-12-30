#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string A;
    cin >> A;

    map<int, int> dic;

    for (int i=0; i<A.size(); i++) {
        int x = static_cast<int>(A[i]);
        if (x > 96) {x -= 32;}

        dic[x]++;
    }

    int max_val = 0;
    int max_key = 0;
    bool isMultiple = false;

    for (auto const& [key, value] : dic) {
        if (value > max_val) {
            max_val = value;
            max_key = key;
            isMultiple = false;
        }

        else if (value == max_val && max_val != 0) {
            isMultiple = true;
        }
    }

    if (isMultiple) {
        cout << "?" << "\n";
    }

    else {
        cout << static_cast<char>(max_key) << "\n"; 
    }

    return 0;
}