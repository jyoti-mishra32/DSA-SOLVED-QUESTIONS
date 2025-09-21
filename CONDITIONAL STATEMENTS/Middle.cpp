#include <iostream>
using namespace std;

int main() {

  int a,b,c;
  cout<<"Enter three numbers as input:";
  cin>>a>>b>>c;

  int middle;
  if((a > b && a < c)|| (a > c && a < b))
  middle=a;

  else if((b > a && b < c) || (b > c && b < a))
  middle=b;

  else
    middle=c;
   
    cout<<"The middle number is:"<<middle;

  return 0;
}