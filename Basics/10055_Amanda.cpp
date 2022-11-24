/*
*OnlineJudge
*10055 - Hashmat the brave warrior
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long X, Y;
    while (cin >> X >> Y) {
        if (Y > X)  
            cout << Y-X << endl;
        else
            cout << X-Y << endl;
    }
    return 0;
}