#include<iostream>
using namespace std;

bool vis[101][101];

bool isValid (int maze[][20],int x, int y, int n) {
    if (x < 1 || x > n || y < 1 || y > n) return false;

    if (vis[x][y] || maze[x][y] == 'X') return false;

    return true;
}

bool f (int maze[][20], int x, int y, int n) {
    if (x == n && y == n) return true;

    vis[x][y] = true;

    // L
    if (isValid(maze, x, y - 1, n)) {
        if (f(maze, x, y - 1, n)) return true;
    }

    // R
    if (isValid(maze, x, y + 1, n)) {
        if (f(maze, x, y + 1, n)) return true;
    }

    // U
    if (isValid(maze, x - 1, y, n)) {
        if (f(maze, x - 1, y, n)) return true;
    }

    // D
    if (isValid(maze, x + 1, y, n)) {
        if (f(maze, x + 1, y, n)) return true;
    }

    vis[x][y] = false;
    return false;
}

bool ratInAMaze(int maze[][20], int n){

    /*Don't write main().
    *Don't take input, it is passed as function argument.
    *Don't print output.
    *Taking input and printing output is handled automatically.
    */

    f (maze, 1, 1, n);

}


int main(){

  int n;
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }
  }
  if(ratInAMaze(maze, n))
  {
	cout<<"true";
  }
  else
  {
	cout<<"false";
  }
}
