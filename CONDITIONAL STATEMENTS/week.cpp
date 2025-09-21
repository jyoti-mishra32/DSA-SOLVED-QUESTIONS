#include <iostream>
using namespace std;

int main() {

  int num;
  cout<<"Enter a number(1-7):";
  cin>>num;

  if(num==1)
  cout<<"Sunday";
  else if(num==2)
  cout<<"Monday";
  else if(num==3)
  cout<<"Tuesday";
  else if(num==4)
  cout<<"Wednesday";
  else if(num==5)
  cout<<"Thrusday";
  else if(num==6)
  cout<<"Friday";
  else if(num==7)
  cout<<"Saturday";
  else
  cout<<"Invalid input!Please enter number between 1 and 7";

  return 0;
}