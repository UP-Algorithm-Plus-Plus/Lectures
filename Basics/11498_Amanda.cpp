/*
*OnlineJudge
*11498 - Division of Nlogonia
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int K;
    while (1) { 
        cin >> K;
        if (!K)
            break;
        
        int N, M;
        cin >> N >> M;

        int X, Y;
        for (int k = 0; k < K; k++) {
            cin >> X >> Y;
            if ((X == N) || (Y == M))
                printf("divisa\n");
            else if (X > N) { // east
                if (Y > M) // north
                    printf("NE\n");
                else
                    printf("SE\n");
            } else { // west
                if (Y > M) // north
                    printf("NO\n");
                else
                    printf("SO\n");
            }
        }

    }
    return 0;
}