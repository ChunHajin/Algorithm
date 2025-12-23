#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    int A, B;
    cin >> n;
    vector<int> v;
    
    for (int i=0; i<n; i++) {
        cin >> A >> B;
        v.push_back(A+B);
    }

    for (int i=0; i<n; i++)  {
        cout << v[i] << endl;
    }

    return 0;
}