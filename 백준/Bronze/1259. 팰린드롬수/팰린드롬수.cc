#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    vector<bool> v;

    while (cin >> a) {
        if (a == "0") break;
        bool isPal = true;
        int s = a.size();
        for (int i=0; i<s; i++) {
            if (i > s/2) break;
            if (a[i] != a[s-i-1]) {
                isPal = false;
                break;
            }
        }
        v.push_back(isPal);
    }

    for (int i=0; i<v.size(); i++) {
        if (v[i]) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }

    return 0;
}