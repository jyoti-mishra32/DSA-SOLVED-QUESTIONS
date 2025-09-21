#include <iostream>
using namespace std;

int main() {

  float length,breadth,height,volume;

  cout<<"Enter Length:";
  cin>>length;

  cout<<"Enter Breadth:";
  cin>>breadth;

  cout<<"Enter Height:";
  cin>>height;

  volume = length * breadth * height;

  cout<<"Volume of cuboid =" <<volume;

  return 0;
}