#include <iostream>
using namespace std;
int main(){
  int a;
  int*p;
  p=&a;
  a=1;
  cout<<"The value of a is "<<a<<endl;
  count<"The value of s form the pointer using"<<*p<<endl;
  return 0;
}
___________________________________________________________________

#include <iostream>
using namespace std;
int main(){
  int a;
  int b;
  int c;
  p=&a;
  q=&a;

  a=2;
  b=c;
  c=*p+*q;
  cout<<"The Value of c is: "<<c;
