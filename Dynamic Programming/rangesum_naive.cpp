/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int S(int b, int arr[]) {
	if (b == 0) return 0;
	
	return memo[b] = arr[b] + S(b-1);
}

int main () {
    
	// insert queries here with format S(N);
    // if query is from A to B with A != 0, use S(B) - S(A)

	return 0;
}
