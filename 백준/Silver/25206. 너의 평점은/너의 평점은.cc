#include <iostream>
#include <string>
using namespace std;

int main() {
    // 빠른 입출력을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double GPA = 0;
    double totalCredit = 0;

    for (int i=0; i<20; i++) {
        string subject;
        double credit;
        string grade;
        cin >> subject >> credit >> grade;

        if (grade == "P") continue;
        
        totalCredit += credit;

        if (grade == "F") continue;

        double temp = grade[0] - 'A';
        temp = 4.0 - temp;
        if (grade[1] == '+') {
            temp += 0.5;
        }

        GPA += temp * credit;
    }

    cout << GPA / totalCredit << "\n";
    
    return 0;
}