#include <iostream>
#include <queue>

using namespace std;

int main(){

  int N, M, x, y, c = 0, caverna[12][12];
  queue <pair<pair<int,int>,int>> fila;

  cin >> N >> M;

  for(int i = 0; i < N + 2; i++){
    for(int j = 0; j < M + 2; j++){
      caverna[i][j] = 2;
    }
  }
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= M; j++){
      cin >> caverna[i][j];
      if(caverna[i][j] == 3) fila.push(make_pair(make_pair(i,j),c)); 
    }
  }
  
  while(!fila.empty()){

    x = fila.front().first.first;
    y = fila.front().first.second;
    c = fila.front().second;
    fila.pop();

    if(caverna[x+1][y] != 2){
      caverna[x][y] = 2;
      if(caverna[x+1][y] == 0) break;
      else if(caverna[x+1][y] == 1) fila.push(make_pair(make_pair(x+1,y),c+1));
    }
    if(caverna[x-1][y] != 2){
      caverna[x][y] = 2;
      if(caverna[x-1][y] == 0) break;
      else if(caverna[x-1][y] == 1) fila.push(make_pair(make_pair(x-1,y),c+1));
    }
    if(caverna[x][y+1] != 2){
      caverna[x][y] = 2;
      if(caverna[x][y+1] == 0) break;
      else if(caverna[x][y+1] == 1) fila.push(make_pair(make_pair(x,y+1),c+1));
    }
    if(caverna[x][y-1] != 2){
      caverna[x][y] = 2;
      if(caverna[x][y-1] == 0) break;
      else if(caverna[x][y-1] == 1) fila.push(make_pair(make_pair(x,y-1),c+1));
    }
  }

  cout << c + 1 << endl;
  
}
