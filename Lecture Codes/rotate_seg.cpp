/*
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

#define pt pair <double, double>
#define seg pair <pt, pt>
#define vec pair <double, double>
#define cpt complex <double>
#define x first
#define y second
#define pi 3.14

istream& operator >> (istream& is,  seg& a)
{
    is >> a.first.x >> a.first.y >> a.second.x >> a.second.y;
    return is;
}

ostream& operator << (ostream& os, pt a)
{
    os << "(" << a.x << ", " << a.y << ")";
    return os;
}

ostream& operator << (ostream& os, seg a)
{
    os << a.first << ", " << a.second;
    return os;
}

vec operator - (vec b, vec a)
{
    return make_pair(b.x - a.x, b.y - a.y);
}

pt operator + (vec a, vec b)
{
    return make_pair(a.x + b.x, a.y + b.y);
}

seg rotate(seg S, double theta){
	theta *= pi/180.0; // convert theta to radians if necessary
	pt a = S.first, b = S.second; //assigns first and second points to a and b
	vec ab = b - a; // create a vector along this segment
	cpt v(ab.x, ab.y); // convert to complex
	v = v * polar(1.0, theta); // polar(abs(v)*1, arg(v) + theta), theta was added
	S.second = S.first + pt(v.real(), v.imag());
	// translate the second point along the rotated vector from the first point!
	return S;
}


int main() {
	seg a;
    double theta;
    cin >> a >> theta;
    a = rotate(a, theta);
    cout << a << endl;
    return 0;
}