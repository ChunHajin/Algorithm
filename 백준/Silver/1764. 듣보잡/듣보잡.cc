#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    set<string> a;
    set<string> b;
    vector<string> v;

    for (int i=0; i<N; i++) {
        string s;
        cin >> s;
        a.insert(s);
    }

    for (int i=0; i<M; i++) {
        string s;
        cin >> s;
        b.insert(s);
    }

    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(v));
    cout << v.size() << "\n";
    for (const string& s : v) {
        cout << s << "\n";
    }
    
    return 0;
}