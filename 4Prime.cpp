#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 2;
  
  while(i<n){

    if(n%i==0){
      cout << "The Number is not Prime For " << i << endl;
    }else {
      cout << "The Number is Prime For " << i << endl;
    }
    i = i + 1;
    
  }
  
}