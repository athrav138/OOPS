# include <iostream>
using namespace std;

class add {
  public:
  int a;
  int b;

  add(int x,int y){
    a=x;
    b=y;
  }

  void print(){
    cout<<"The sum of a="<<a<<" b="<<b<<" is:"<<a+b;
  }

};

int main(){

  add a1(19,12);

  a1.print();



 return 0;
}


