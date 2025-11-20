/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

string X, Y;
int memo[5][5];

int lcs(int m, int n) {
    // m = length of X, n = length of Y
    if(m == 0 || n == 0) // end of string
        return 0;

    if (memo[m-1][n-1] != -1)
        return memo[m-1][n-1];

    if (X[m-1] == Y[n-1])
        return memo[m-1][n-1] = lcs(m-1,n-1) + 1;
    else
        return memo[m-1][n-1] = max(lcs(m-1,n), lcs(m, n-1));
}

int main() {
	X = "tarse";
    Y = "state";
    
    int m = X.size();
    int n = Y.size();

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            memo[i][j] = -1;
            //memset(memo[m], -1, sizeof(memo[m]));
    
    cout << lcs(m,n) << endl;
    
    return 0;
}