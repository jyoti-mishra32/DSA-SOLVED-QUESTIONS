#include <iostream>
using namespace std;

int main() {

  int n,a = 0, b = 1,next;
  cout<<"Enter N:";
  cin>>n;

  if(n == 1){
    cout<<"Nth term =" <<a;
  }
  else if(n == 2) {
    cout<<"Nth term=" <<b;
  }
  else {
    for(int i =3;i<=n;i++) {
      next = a+b;
      a =b;
      b =next;
    }
    cout<<"Nth term=" <<b;
  }

  return 0;
}

