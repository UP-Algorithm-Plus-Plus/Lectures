/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int S[11];
	S[0] = 0;
	for (int b = 1; b <= 10; b++) {
		S[b] = arr[b] + S[b-1];
	}

    return 0;
}