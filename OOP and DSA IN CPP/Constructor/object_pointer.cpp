# include <iostream>
# include <string>
using namespace std;

class add{
  public:
    int a;
    int b;

    void get(int &x,int &y){
      cout<<"Enter first number: ";
      cin>>x;
      cout<<"Enter second number: ";
      cin>>y;
    }

    void put(){
      cout<<"The print the values on the screen :\n";
      cout<<"a="<<a<<endl;
      cout<<"b="<<b<<endl;
    }

    add(int x,int y){
      a=x;
      b=y;
    }

    void change(add *addd){
      addd->a=12;
      addd->b=13;
    }

};

int main(){
  int a,b;

  add temp(0,0);
  add *p=&temp;
  p->get(a,b);

  add a1(a,b);
  p=&a1;
  p->put();
   p->change(&a1);
     p->put();


  return 0;
}