/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int memo[11];

int S (int b, int arr[]) {
	if (b == 0)
        return 0;
	
    if (memo[b] != -1)
        return memo[b];
	
    return memo[b] = arr[b] + S(b-1);
}

int main () {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	memset(memo, -1, sizeof(memo));	// initialize memo to -1

    // insert queries here with format S(N);
    // if query is from A to B with A != 0, use S(B) - S(A)

    return 0;
}