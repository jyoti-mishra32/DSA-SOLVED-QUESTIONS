#include <iostream>
using namespace std;

int main() {

  int score;
  cout<<"Enter your score(0-100):";
  cin>>score;

  if(score>=90 && score<=100){
    cout<<"Grade:A";
  }

  else if(score>=80 && score<90){
    cout<<"Grade:B";
  }

  else if(score>=70 && score<80){
    cout<<"Grade:C";
  }

  else if(score>=60 && score<70){
    cout<<"Grade:D";
  }

  else if(score>=0 && score<60){
    cout<<"Grade:F";
  }
   else {
    cout<<"Invalid score!Please enter between 0 and 100:"; 
  }
  return 0;
}