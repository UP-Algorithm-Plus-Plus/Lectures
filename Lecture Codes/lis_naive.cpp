/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int ans;
int lis(int N, int arr[]) { // N == ending element/"size" of array
    if (N == 1)
		return 1;
    
    int max_ending_here = 1;

    for (int i = 1; i < N; i++) {
        int max_ending_there = lis(i, arr) + 1;
        if (arr[i-1] < arr[N-1])
            max_ending_here = max(max_ending_here, max_ending_there);
    }

	ans = max(ans, max_ending_here);

    return max_ending_here;
}


int main() {
	int arr[] = {7,10,8,9,11};

    ans = 1;
    lis(sizeof(arr)/sizeof(int), arr);

	cout << ans << endl;

    return 0;
}