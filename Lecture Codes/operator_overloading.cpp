/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

#define pii pair <int, int>
#define x first
#define y second

istream& operator >> (istream& is,  pii& a)
{
    is >> a.x >> a.y;
    return is;
}

ostream& operator << (ostream& os, pii a)
{
    os << "(" << a.x << ", " << a.y << ")";
    return os;
}

pii operator + (pii a, pii b)
{
    return make_pair(a.x + b.x, a.y + b.y);
}

int main() {
	pii a, b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;
}