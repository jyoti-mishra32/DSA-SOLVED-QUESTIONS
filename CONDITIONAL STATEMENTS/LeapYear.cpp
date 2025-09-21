#include <iostream>
using namespace std;

int main() {

  int start,end;
  cout<<"Enter start year:";
  cin>>start;
  cout<<"Enter end year:";
  cin>>end;

  cout<<"Leap years between"<<start<<"and"<<end<<":";
  for(int year=start;year<=end;year++) {
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
      cout<<year<<" ";
    }
  }

  return 0;
}

