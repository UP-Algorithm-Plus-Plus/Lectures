/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[] = {4, -6, 9, -8, 4, 0, 4, 1};
    
    int ans = 0;
    int max_here;
    for (int i = 0; i < N; i++) {
        max_here += arr[i];
        if (max_here < 0)
            max_here = 0;
        ans = max(ans, max_here);   
    }

    return 0;
}