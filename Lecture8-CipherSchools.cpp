#include <iostream>
using namespace std;
int main(){
  int a[4];
  int i;
  cout<<"Give 5 integer as input"<<endl;
  for(i=0;i<5;i++){
              cin>>a[i]<<" ";
  }
  return 0;
}

_______________________________________________

//Print 10 number consecutively [ARRAY] in reverse order
#include <iostream>
using namespace std;
int main(){
  int a[9];
  int i;
  cout<<"Give 10 integer as input"<<endl;
  for (i=0;i<10;i++){
    cin>>a[i];
  }
  cout<<"The 10 given input are: "<<endl;
  for(i=9;i>=0;i--){
              cin>>a[i]<<" ";
  }
  return 0;
}
