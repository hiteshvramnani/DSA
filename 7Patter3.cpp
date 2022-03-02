#include <iostream>
using namespace std;

int main() {

  /*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

  /*
n - j + 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

  int n;
  cin >> n;

  int i = 1;

  while (i<=n){
    
    int j = 1;
    while(j<=n){
      //change here (j) or (n - j + 1)
      cout << j << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  
}