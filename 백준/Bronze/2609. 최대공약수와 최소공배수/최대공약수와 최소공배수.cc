#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int mDiv, mMul;

    for (int i=1; i<=min(a, b); i++) {
        if (a%i == 0 && b%i == 0) {
            mDiv = i;
        }
    }

    int x = a / mDiv;
    int y = b / mDiv;
    int k = x * y;

    mMul = k * mDiv;

    cout << mDiv << "\n" << mMul << "\n";

    return 0;
}