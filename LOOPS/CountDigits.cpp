#include <iostream>
using namespace std;

int main() {

  int n,count=0;
  cout<<"Enter a number:";
  cin>>n;

  if(n==0) {
    count=1;
  }
  else {
    for(; n!=0;n/=10) {
      count++;
    }
  }

  cout<<"Digits="<<count;

  return 0;
}