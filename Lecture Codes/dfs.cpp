/*
Code By: Aidee
*/

#include <bits/stdc++.h>

using namespace std;

int sz = 8; //size of graph

void add_edge(vector<int>neighbors[], int x, int y){
  neighbors[x].push_back(y);
  neighbors[y].push_back(x);
  return;
}

void dfs(vector<int> neighbors[], vector<bool> visited, int cur){
  visited[cur] = true;

  cout << cur << " ";

  int next;
  for(int i = 0; i < (int)neighbors[cur].size();i++){
    next = neighbors[cur][i];
    if(!visited[next])
      dfs(neighbors, visited, next);
  }
  return;
}

int main(void){
  vector<int> neighbors[sz]; //the graph
  vector<bool> visited(sz, false);

  add_edge(neighbors, 0, 1);
  add_edge(neighbors, 0, 2);
  add_edge(neighbors, 1, 4);
  add_edge(neighbors, 2, 3);

  dfs(neighbors, visited, 0);
  cout << endl;

  return 0;
}