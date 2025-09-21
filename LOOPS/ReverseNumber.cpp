#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter a number:";
  cin>>n;

  string num =to_string(n); //convert number to string
  string rev="";

  for(int i = num.length() - 1;i>=0;i--) {
    rev += num[i]; //append characters in reverse order
  }

  cout<<"Reversed number="<<rev;

  return 0;
}