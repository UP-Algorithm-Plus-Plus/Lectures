/*
*OnlineJudge
*11078 - Open Credit System
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        
        int i;
        int ans = -1500000;
        int highest = -1500000;
        for (int n = 0; n < N; n++) {
            cin >> i;
            ans = max(ans, highest - i);
            highest = max(highest, i);
        }

        cout << ans << endl;
    }
    return 0;
}