#include <iostream>
using namespace std;

int main() {

  int n=7;

  for(int i=0; i<n; i++) {
  for(int j=0; j<n; j++) {
     if (
       //top row
       (i==0 && j>=n/2) ||
       //left column
       (i==0 && i<=n/2) ||
       //middle row
       (i==n/2) ||
       //middle column
       (i==n/2) ||
       //right column
       (i==n-1 && i>=n/2) ||
       //bottom row
       (i==n-1 && j<=n/2) 
     )
       cout<<"*";
       else
       cout<<" ";
  }
       cout<<endl;
  }

  return 0;
}