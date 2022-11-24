/*
*OnlineJudge
*11988 - Broken Keyboard (a.k.a. Beiju Text)
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    char c;
    while (1) {
        c = getchar();
        if (c == EOF)
            break;

        deque <char> to_print;
        stack <char> home;
        bool to_home = false;
        while (1) {
            if ((c == '\n') || (c == EOF))
                break;

            if (c == '[') {
                to_home = true;
                while (!home.empty()) {
                    to_print.push_front(home.top());
                    home.pop();
                }
            } else if (c == ']') {
                to_home = false;
                while (!home.empty()) {
                    to_print.push_front(home.top());
                    home.pop();
                }
            } else {
                if (to_home)
                    home.push(c);
                else
                    to_print.push_back(c);
            }

            c = getchar();
        }

        while (!home.empty()) {
            to_print.push_front(home.top());
            home.pop();
        }

        while (!to_print.empty()) {
            cout << to_print.front();
            to_print.pop_front();
        }
        cout << endl;
    }
    return 0;
}