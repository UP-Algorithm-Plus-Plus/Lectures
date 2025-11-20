/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string X = "tarse";
    string Y = "state";

    // m = length of X, n = length of Y;
    int m = X.size();
    int n = Y.size();

    // initialize lcs table to 0
    int lcs[m+1][n+1];
    for (int i = 0; i <= m; i++)
        for (int j = 0; j <= n; j++)
            lcs[i][j] = 0;

    // start at 1 because of i-1 or j-1
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i-1] == Y[j-1])
                lcs[i][j] = lcs[i-1][j-1] + 1;
            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    }

    cout << lcs[m-1][n-1] << endl;

    return 0;
}