/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[] = {-7,10,9,2,3,8,8,6};
    int N = sizeof(arr)/sizeof(int); 

    if (N == 0)
        cout << 0 << endl;
    else {
        // initialize with size of arr with all elements = 0
        vector <int> tail (N, 0); 
    
        tail[0] = arr[0];
        int idx = 1;
        for (int i = 1; i < N; i++) {
            if (arr[i] < tail[idx]) // replace 
                tail[idx] = arr[i];
            else if (arr[i] > tail[idx - 1]) // > < only not ==
                tail[idx++] = arr[i]; // extend sequence
            else { // == 

                // either extend sequence or throw away all larger elements to make room for other greater elements
                
                // binary search
                int r = idx - 1;
                int l = -1;

                while (r - l > 1) {
                    int m = l + (r - l) / 2;
                    if (arr[m] >= arr[i])
                        r = m;
                    else
                    l = m;
                }
            
                tail[r] = arr[i];
            }
            
        }

        // length of lis
        cout << idx << endl;
        // content of lis
        for (int i = 0; i < idx; i++)
            cout << tail[i] << endl;

    }

    return 0;
}