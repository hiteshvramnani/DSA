#include <iostream>
using namespace std;

int main() {
/*
  int a;
  cin >> a;
  // cout<< "The value of n is: " << n << endl;

  // If A is Positive
  if(a > 0){
    cout << "A is Positive" << endl;
  } else{
    cout << "A is Negative" << endl;
  }
  */

  /*
  int a, b;
  cout << "Enter Value of A" << endl;
  cin >> a;
  cout << "Enter Value of B" << endl;
  cin >> b;
  
  cout << "The Value of A is: " << a << " And Value of B is: " << b << endl;

  if(a>b){
    cout << "A is Greater" << endl;
  } 
  if(b>a){
    cout << "B is Greater" << endl;
  }
  if(b == a){
    cout << "Both are Equal" << endl;
  }
*/


  /*
  int a;
  a = cin.get();

  cout << "The Value of a is: " << a << endl;
  */

  int a;
  cout << "Enter Value of A" << endl;
  cin >> a;

  if(a > 0){
    cout << "A is Posisitive" << endl;
  }
  else if(a < 0){
    cout << "A is Negative" << endl;
  }
  else{
    cout << "A is Zero (0)" << endl;
  }
  
}