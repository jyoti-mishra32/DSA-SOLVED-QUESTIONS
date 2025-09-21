#include <iostream>
using namespace std;

int main() {

  int age;

  cout<<"Enter your age:";
  cin>>age;

  if(age<13) {
    cout<<"you are a child:";
  }
  
  else if(age>=13 && age<=19){
    cout<<"you are a Teenager:";
  }

  else if(age>=20 && age<=59){
    cout<<"you are an Adult:";
  }

  else {
    cout<<"you are a Senior:";
  }

  return 0;
}