#include <iostream>
#include <string>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string inputText;
    cin >> inputText;

    int count = 1;

    for (int i=1; i<inputText.size(); i++) {
        if (inputText[i] == '=') {
            int temp = i;
            temp--;
            if (inputText[temp] == 'c' || inputText[temp] == 's') {
                count -= 1;
            }
            if (inputText[temp] == 'z') {
                temp--;
                if (inputText[temp] == 'd') {
                    count -= 2;
                }
                else {
                    count -= 1;
                }
            }
        }

        else if (inputText[i] == '-') {
            int temp = i;
            temp--;
            if (inputText[temp] == 'c' || inputText[temp] == 'd') {
                count -= 1;
            }
        }

        else if (inputText[i] == 'j') {
            int temp = i;
            temp--;
            if (inputText[temp] == 'l' || inputText[temp] == 'n') {
                count -= 1;
            }
        }

        count++;
    }

    cout << count << "\n";

    return 0;
}