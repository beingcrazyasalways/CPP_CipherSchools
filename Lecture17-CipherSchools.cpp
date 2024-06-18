#include <iostream>
using namespace std;
void PrintHi(){
  cout<<"Hi"<<endl;
  return;
}
int main(){
  PrintHi();
  return 0;
}

_________________________________

int sum(int a, int b){
  int c;
  c=a+b;
  return c;
}

int main(){
  int a,b;
  a=4;
  b=6;
  d=sum(a,b);
  cout<<"Sum: " <<d;
  return 0;
}
