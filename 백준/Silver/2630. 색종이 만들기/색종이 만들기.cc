#include <iostream>
using namespace std;

int paper[129][129];
int B = 0;
int W = 0;

void check(int row, int col, int size) {
    int standard = paper[row][col];
    
    for (int i=row; i<row+size; i++) {
        for (int j=col; j<col+size; j++) {
            if (paper[i][j] != standard) {
                check(row, col, size/2);
                check(row, col+size/2, size/2);
                check(row+size/2, col, size/2);
                check(row+size/2, col+size/2, size/2);
                return;
            }
        }
    }
    if (standard == 1) {
        B++;
    }
    else {
        W++;
    }    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> paper[i][j];
        }
    }

    check(0, 0, N);

    cout << W << "\n" << B << "\n";


    return 0;
}