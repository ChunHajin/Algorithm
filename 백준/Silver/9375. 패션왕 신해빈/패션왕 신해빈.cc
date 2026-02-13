#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        unordered_map<string, int> fashion;
        
        for (int i = 0; i < n; i++) {
            string name, type;
            cin >> name >> type;
            fashion[type]++;
        }

        int result = 1;
        for (auto const& [type, count] : fashion) {
            result *= (count + 1);
        }

        cout << result - 1 << "\n";
    }

    return 0;
}