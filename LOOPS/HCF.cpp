#include <iostream>
using namespace std;

  int main() {

    int a,b,hcf =1;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    for(int i=1;i<=(a<b?a:b);i++) {
      if(a % i == 0 && b % i == 0) {
        hcf = i;
      }
    }
   
     cout<<"HCF="<<hcf;

    return 0;
  }