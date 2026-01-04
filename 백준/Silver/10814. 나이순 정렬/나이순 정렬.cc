#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const pair<int, string>& x, const pair<int, string>& y) {
    return x.first < y.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, string>> v;
    for (int i=0; i<N; i++) {
        int a;
        string b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    stable_sort(v.begin(), v.end(), compare);

    for (pair<int, string> x : v) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}