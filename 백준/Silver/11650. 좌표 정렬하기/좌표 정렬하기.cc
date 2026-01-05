#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& x, const pair<int, int>& y) {
    if (x.first != y.first) return x.first < y.first;
    else return x.second < y.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>> v;
    for (int i=0; i<N; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), compare);

    for (pair<int, int> x : v) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}