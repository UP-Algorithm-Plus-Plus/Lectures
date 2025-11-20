#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int num;
    cin >> num;
    int reversed_num = 0;
    while (num) {
        int n = num%10;
        reversed_num += n*ceil(pow(10,(int) log10(num)));
        num /= 10;
    }
    cout << reversed_num << endl;
}