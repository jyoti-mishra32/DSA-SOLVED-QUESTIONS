#include <iostream>
using namespace std;

int main() {
   char ch;
   float t;

  cout<<"Enter F(Farehnheit->Celsius) or C(Celsius->Farehnheit):";
  cin>>ch;
  
  cout<<"Enter temperature;";
  cin>>t;

  if(ch=='F' || ch=='f')
  cout<<(t-32)*5/9<<"celsius";

  else if(ch=='C' || ch=='c')
  cout<<(t*9/5)+32<<"Farehnheit";
  
  else {
  cout<<"Invalid choice!";
  }
  return 0;
}