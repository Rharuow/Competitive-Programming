/* 11933 Splitting Numbers

Sample Input
6
7
13
0

Sample Output
2 4
5 2
9 4

*/
#include <iostream>
using namespace std;
int main() {
  int num, a, b, toAdd;    
  while (cin >> num, num) {
      a = 0, b = 0;
      bool addToA = true;
      toAdd = 1;

      while (num) {
        if (num % 2 != 0){               
          if (addToA)
            a += toAdd;
          else
            b += toAdd;
              
          addToA = !addToA;
        }
        toAdd = toAdd<<1;
        num = num >> 1;
      }
      
      cout << a << " " << b << "\n";
  }
  return 0;
}