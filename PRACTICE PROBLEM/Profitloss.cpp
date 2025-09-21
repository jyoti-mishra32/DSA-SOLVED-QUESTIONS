#include <iostream>
using namespace std;

int main() {

  float cp,sp;

  cout<<"Enter cost price per dozen:";
  cin>>cp;

  cout<<"Enter selling price per dozen:";
  cin>>sp;

  float profit_loss = (sp-cp) / 12 * 25; // difference * 25 bananas

  if(profit_loss > 0)
  cout<<"Profit=" <<profit_loss;

  else if(profit_loss < 0)
  cout<<"Loss=" <<profit_loss;
  
  else 
     cout<<"No Profit No Loss";

  return 0;
}