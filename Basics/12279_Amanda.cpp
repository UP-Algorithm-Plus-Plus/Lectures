/*
*OnlineJudge
*12279 - Emoogle Balance
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int case_num = 1;
    int N;
    while (1) {
        cin >> N;
        if (!N)
            break;
        
        int zero = 0;
        int nonzero = 0;
        for (int n = 0; n < N; n++) {
            int x;
            cin >> x;
            if (!x)
                zero++;
            else
                nonzero++;
        }

        int emoogle = nonzero - zero;
        printf("Case %i: %i\n", case_num, emoogle);
        case_num++;
    }
    return 0;
}