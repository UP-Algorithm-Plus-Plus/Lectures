/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int lcs(string X, string Y, int m, int n) 
{ 
    // m = length of X, n = length of Y
    if(m == 0 || n == 0) // end of string
   		return 0; 

    if (X[m-1] == Y[n-1])
   		return lcs(X, Y, m-1, n-1) + 1; 

   	else // not same, so branch
      return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n)); 
} 

int main() {
	string X = "tarse";
    string Y = "state";

    cout << lcs(X, Y, X.size(), Y.size());
    
    return 0;
}