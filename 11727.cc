/*Sample Input
3
1000 2000 3000
3000 2500 1500
1500 1200 1800
Sample Output
Case 1: 2000
Case 2: 2500
Case 3: 1500
*/

#include <iostream>
using namespace std;
int main() {
  int n, count=1, s1, s2, s3;
  cin >> n;
  while(n--) {
    cin >> s1 >> s2 >> s3;
    if ((s1 < s2 && s2 < s3) || (s3 < s2 && s2 < s1)) {
      cout << "Case " << count++ << ": " << s2 << "\n";
    } else if ((s2 < s3 && s3 < s1) || (s2 > s3 && s3 > s1)) {
      cout << "Case " << count++ << ": " << s3 << "\n";
    } else {
      cout << "Case " << count++ << ": " << s1 << "\n";
    }
  }
  return 0;
}