/*
Code by: Aidee Penamora
*/

#include <bits/stdc++.h>

using namespace std;

int sz = 8; //size of graph

void add_edge(vector<int>neighbors[], int x, int y){
  neighbors[x].push_back(y);
  neighbors[y].push_back(x);
  return;
}

void bfs(vector<int>neighbors[], int source){
  vector<int> distance(sz, INT_MAX);
  queue<int> q;

  distance[source] = 0;
  q.push(source);

  int cur, next;
  while(!q.empty()){
    cur = q.front();
    q.pop();

    cout << cur << " ";

    for(int i = 0; i < (int)neighbors[cur].size(); i++){
      next = neighbors[cur][i];
      if(distance[next] == INT_MAX){
        distance[next] = distance[cur] + 1;
        q.push(next);
      }
    }
  }

  return;
}

int main(void){
  vector<int> neighbors[sz]; //the graph

  add_edge(neighbors, 0, 1);
  add_edge(neighbors, 0, 2);
  add_edge(neighbors, 1, 4);
  add_edge(neighbors, 2, 3);

  bfs(neighbors, 0);
  cout << endl;

  return 0;
}
