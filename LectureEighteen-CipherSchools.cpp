void swap(int a, int b){
  int c;
  c=a;
  a=b;
  b=c;
}
int main(){
  int a,b;
  a=4;
  b=6;
  int d;
  d=swap(a,b);
  cout<<"Swapped Digits are: "<<d;
  return 0;
}
