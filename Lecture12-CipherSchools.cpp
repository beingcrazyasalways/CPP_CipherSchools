#include <iostream>
using namespace std;
int main(){
    int password;
    cout<<"Enter the password: ";
    do{
      cin>>password;
    }
    while (password<999999);
}
