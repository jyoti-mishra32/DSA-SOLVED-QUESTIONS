#include <iostream>
using namespace std;

int main() {

  int n,a=0,b=1,next;
  cout<<"Enter a number:";
  cin>>n;

  bool found =false;

  while(a <=n) {
  if(a == n) {
    found = true;
    break;
  } 
   next = a+b;
   a =b;
   b = next; 
  }

  if(found)
  cout<<n<<"Is in the Fibonaci series";
  else
  cout<<n<<"is not in the Fibonaci series";

  return 0;
}

