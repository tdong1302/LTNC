#include <iostream>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  char board[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) { cin >> board[i][j]; }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == '*') {
        cout << '*'<<" ";
      } else {
        int count = 0;
        for (int di = -1; di <= 1; di++) {
          for (int dj = -1; dj <= 1; dj++) {
            int ii = i + di, jj = j + dj;
            if (0 <= ii && ii < m && 0 <= jj && jj < n && board[ii][jj] == '*') {
              count++;
            }
          }
        }
        cout << count<<" ";
      }
    }
    cout << endl;
  }
  return 0;
}
