/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;
 
// despite the function, this is still bottom-up DP
void constructLIS(int arr[], int n)
{
    // L[i] - The longest increasing sub-sequence ending with arr[i]
    vector <vector<int>> L(n);
 
    L[0].push_back(arr[0]);
 
    // common LIS with a twist
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if ((arr[i] > arr[j]) && (L[i].size() < L[j].size() + 1))
                L[i] = L[j];
        }
 
        // L[i] ends with arr[i]
        L[i].push_back(arr[i]);
    }
 
    vector <int> max = L[0];
 
    for (int i = 0; i < (int) L.size(); i++)
        if (L[i].size() > max.size())
            max = L[i];
 

    // output LIS length
    cout << max.size() << endl;

    // max will contain LIS list
    for (int i = 0; i < (int) max.size(); i++)
        cout << max[i] << endl;
}
 
int main()
{
    int arr[] = {7,10,8,9,11};
    int n = sizeof(arr)/sizeof(int);

    constructLIS(arr, n);
    return 0;
}