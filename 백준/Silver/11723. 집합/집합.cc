#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    set<int> s;
    for (int i=0; i<N; i++) {
        string a;
        cin >> a;
        if (a == "all") {
            for (int n=1; n<=20; n++) {
                s.insert(n);
            }
            continue;
        }
        if (a == "empty") {
            s.clear();
            continue;
        }
        int b;
        cin >> b;
        if (a == "add") {
            s.insert(b);
        }
        else if (a == "remove") {
            s.erase(b);
        }
        else if (a == "check") {
            cout << s.count(b) << "\n";
        }
        else if (a == "toggle") {
            if (s.count(b)) {
                s.erase(b);
            }
            else {
                s.insert(b);
            }
        }
    }


    return 0;
}