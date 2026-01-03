#include <iostream>
#include <string>
#include <vector>
using namespace std;

void insertion_sort(vector<string>& v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        string key = v[i];
        int j = i - 1;

        while (j >= 0) {
            if (v[j].length() > key.length() || 
               (v[j].length() == key.length() && v[j] > key)) {
                v[j + 1] = v[j];
                j--;
            } else {
                break;
            }
        }
        v[j+1] = key;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<string> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    insertion_sort(v);

    string last = "";
    for (string s : v) {
        if (s == last) continue;
        cout << s << "\n";
        last = s;
    }

    return 0;
}