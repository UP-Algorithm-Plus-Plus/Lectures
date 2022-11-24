/*
*OnlineJudge
*10226 - Hardwood Species
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin >> N;
    getchar(); // gets \n after N
    getchar(); // gets empty space

    bool first = true;
    for (int n = 0; n < N; n++) {
        if (first)
            first = false;
        else
            cout << endl;

        string tree;
        map <string, float> forest;
        vector <string> tree_list;
        float num_of_trees = 0;

        while (1) { // get list of trees
            getline(cin, tree);
            
            auto it = forest.find(tree);
            if (it == forest.end()) {
                forest[tree] = 1;
                tree_list.push_back(tree);
            } else
                forest[tree]++;

            num_of_trees++;

            if ((cin.peek() == '\n') || (cin.peek() == EOF))
                break;
        }
        
        sort(tree_list.begin(), tree_list.end());

        for (int i = 0; i < (int) tree_list.size(); i++) {
            tree = tree_list[i];
            cout << setprecision(4) << fixed;
            cout << tree << " " << (forest[tree]*100)/num_of_trees << endl;
        }

        getchar(); // gets empty space between inputs
    }
    return 0;
}