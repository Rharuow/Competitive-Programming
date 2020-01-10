/* 10921 Find the Telephone

Sample Input
1-HOME-SWEET-HOME
MY-MISERABLE-JOB

Sample Output
1-4663-79338-4663
69-647372253-562

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  
  string input;
  string output;
  

  while(cin >> input) {
    output = input;
    for (int i = 0; i < input.size(); i++) {
      if(input[i] >= 'A' and input[i] <= 'C' ) {
        output[i] = '2';
      } else if (input[i] >= 'D' and input[i] <= 'F' ) {
        output[i] = '3';
      } else if (input[i] >= 'G' and input[i] <= 'I' ) {
        output[i] = '4';
      } else if (input[i] >= 'J' and input[i] <= 'L' ) {
        output[i] = '5';
      } else if (input[i] >= 'M' and input[i] <= 'O' ) {
        output[i] = '6';
      } else if (input[i] >= 'P' and input[i] <= 'S' ) {
        output[i] = '7';
      } else if (input[i] >= 'T' and input[i] <= 'V' ) {
        output[i] = '8';
      } else if (input[i] >= 'W' and input[i] <= 'Z' ) {
        output[i] = '9';
      } else {
        output[i] = input[i];
      }
    }

    cout << output << "\n";
  }
  return 0;
}
