/*
*OnlineJudge
*11995 - I Can Guess the Data Structure!
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    while (cin >> N) {
        int cmd, x;
        stack <int> s;
        queue <int> q;
        priority_queue <int> pq;
        bool is_s = true, is_q = true, is_pq = true;

        for (int n = 0; n < N; n++) {
            cin >> cmd >> x;
            if (cmd == 1) {
                s.push(x);
                q.push(x);
                pq.push(x);
            } else { // cmd == 2
                if (!s.empty() && (x == s.top()))
                    s.pop();
                else
                    is_s = false;

                if (!q.empty() && (x == q.front()))
                    q.pop();
                else
                    is_q = false;

                if (!pq.empty() && (x == pq.top()))
                    pq.pop();
                else
                    is_pq = false;
            }
        }

        if ((is_s) && (!is_q) && (!is_pq))
            cout << "stack" << endl;
        else if ((!is_s) && (is_q) && (!is_pq))
            cout << "queue" <<  endl;
        else if ((!is_s) && (!is_q) && (is_pq))
            cout << "priority queue" <<  endl;
        else if ((!is_s) && (!is_q) && (!is_pq))
            cout << "impossible" <<  endl;
        else
            cout << "not sure" << endl;
    }
    
    return 0;
}