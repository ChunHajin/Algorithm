#include <iostream>
#include <string>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    bool isMlack = M<45;

    if (isMlack) {
        H--;
        M+=60;
        M-=45;
        if (H<0) {H=23;}
        cout << H << " " << M << endl;
    }

    else {
        M-=45;
        cout << H << " " << M << endl;
    }

    return 0;
}