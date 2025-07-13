# include <iostream>
using namespace std;

void change(int & a){
  a=20;
}

int main(){

  int a=10;
  cout<<a<<endl;
  
  change(a);
  cout<<a<<endl;

 

 return 0;
}