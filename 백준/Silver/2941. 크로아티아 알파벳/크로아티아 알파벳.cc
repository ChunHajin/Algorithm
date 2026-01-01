#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<string> cr = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (string x : cr) {
        size_t pos;
        while ((pos = s.find(x)) != string::npos) {
            s.replace(pos, x.length(), "*");
        }
    }

    cout << s.size();

    return 0;
}