/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {7,10,8,9,11};

    int N = sizeof(arr)/sizeof(int); // size of array
    int lis[N] = {0}; // initialize to zero (unnecessary ngl)
    lis[0] = 1; // first digit
    
    int ans = 0;
    for (int i = 1; i < N; i++) {
        lis[i] = 1; // base case is 1 per digit
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j])
                lis[i] = max(lis[i], lis[j] + 1);
        }
        ans = max(ans, lis[i]);
    }

    cout << ans << endl;

    return 0;
}