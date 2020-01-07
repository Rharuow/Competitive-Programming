/*Sample Input
2
100 0
0 100
Sample Output
Case 1: 100.00
Case 2: 55.56
F = 9/5C + 32
*/

#include <iostream>
using namespace std;
int main() {
  int n, count=1;
  double c, f;
  cin >> n;
  cout << fixed;
  cout.precision(2);
  while(n--) {
    cin >> c >> f;
    f = (9.0/5.0)*c + 32.0 + f;
    c = (f-32)*(5.0/9.0);
    cout << "Case " << count++ << ": " << c << '\n';
  }
  return 0;
}