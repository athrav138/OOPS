# include <iostream>
# include <string>
using namespace std;

void function1(){
int n=12;
n+=1;
cout<<"n="<<n<<endl;

}

void function2(){
  static int n=12;
n+=1;
cout<<"n="<<n<<endl;
}


int main(){

  function1();
  function1();
  function1();

  cout<<"After using the static keyword:\n";
  function2();
  function2();
  function2();
  
  return 0;
}