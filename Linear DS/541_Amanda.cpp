/*
*OnlineJudge
*541 - Error Correction
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    while (1) {
        cin >> N;
        if (!N)
            break;

        int matrix[N][N];
        for (int n = 0; n < N; n++)
            for (int m = 0; m < N; m++)
                cin >> matrix[n][m];
        
        bool correct = true;
        
        // check per row
        int row_parity[N] = {0};
        for (int n = 0; n < N; n++)
            for (int m = 0; m < N; m++)
                row_parity[n] += matrix[n][m];

        // check per column
        int col_parity[N] = {0};
        for (int n = 0; n < N; n++)
            for (int m = 0; m < N; m++)
                col_parity[n] += matrix[m][n];

        // answer
        bool valid = true;
        int a = 0;
        int b = 0;
        for (int n = 0; n < N; n++) {
            if (row_parity[n]%2) {
                if (!a)
                    a = n;
                else
                    valid = false;
            }
        }

        for (int n = 0; n < N; n++) {
            if (col_parity[n]%2) {
                if (!b)
                    b = n;
                else
                    valid = false;
            }
        }

        if (valid && !a && !b)
            cout << "OK" << endl;
        else if (valid)
            cout << "Change bit (" << a+1 << "," << b+1 << ")" << endl;
        else
            cout << "Corrupt" << endl;
    }
    return 0;
}