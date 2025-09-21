#include <iostream>
#include <string>
using namespace std;

int main() {

  string time;
   
  cout<<"Enter time(HH:MM):";
  cin>>time;

  string hour=time.substr(0,2);
  string minute=time.substr(3,2);

  cout<<"Hour-"<<hour<<",Minute-"<<minute;
  return 0;
}