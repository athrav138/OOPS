# include <iostream>
using namespace std;

class constructor_overloading{
  public:
  int a;
  string b;
  float c;

  constructor_overloading(int n,string s,float f){
    a=n;
    b=s;
    c=f;
  }

  constructor_overloading(string s,int n,float f){
    a=n;
    b=s;
    c=f;
  }

  constructor_overloading(float f,int n,string s){
    a=n;
    b=s;
    c=f;
  }

  constructor_overloading(string s,float f,int n){
    a=n;
    b=s;
    c=f;
  }

  void display(){
    cout<<"The printing :";
    cout<<"a:"<<a<<endl;
    cout<<"string:"<<b<<endl;
    cout<<"float: "<<c;
  }

};

int main(){

  constructor_overloading c1(12,"string",2.3);

  c1.display();

  return 0;
}