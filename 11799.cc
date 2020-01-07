#include <iostream>
using namespace std;
int main() {
  int n, T, count=1, vc, c=1;
  cin >> n;
  while(n--) {
    c = 1;
    cin >> T;
    while(T--) {
      cin >> vc;
      if(vc > c) {
        c = vc;
      }
    }
    cout << "Case " << count++ << ": " << c << '\n';
  }
  return 0;
}