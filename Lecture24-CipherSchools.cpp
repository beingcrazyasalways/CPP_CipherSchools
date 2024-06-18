#include <iosteam>
using namespace std;
void swap(int*x, int*y){
  int c;
  c=*x;
  *x=*y;
  *y=c;
  cout<<"The swapping is complete"<<endl;

}

int main (){
  int a,b;
  a=3;
  b=4;
  swap(&a,&b);
  cout<<"The value of a and b after the swap is : "<<a<<" "<<b<<endl;
  return 0;
}
