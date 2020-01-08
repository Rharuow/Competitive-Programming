/* 591 Box of Bricks

Sample Input
6
5 2 4 1 7 5
0
Sample Output
Set #1
The minimum number of moves is 5.

*/
#include <iostream>
using namespace std;
int main() {
  int col, count = 1, index, sum, avg, moves, h[50];
  while (cin >> col, col){
    index = col;
    sum=0;
    while ( index--) {
      cin >> h[index];
      sum += h[index];
    }
    avg = sum/col;
    moves = 0;
    for( index = 0; index < col; ++index ) {
      if (h[index] > avg) {
        moves+=h[index]-avg;
      }
    }
    cout << "Set #" << count++ << endl;
    cout << "The minimum number of moves is "<< moves << ".\n\n"; 
  }

  return 0;
}