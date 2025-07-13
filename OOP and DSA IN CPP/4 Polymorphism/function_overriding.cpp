# include <iostream>
using namespace std;

class function_overriding {
  int a;

  public :
  void get(){
    cout<<"enter a:";
    cin>>a;
  }
  void show(){
    cout<<"a="<<a<<endl;
  }
};

class function : public function_overriding{
  int b;
  public:
  // virtural function
   virtual void get(){
    cout<<"enter b:";
    cin>>b;
  }
  void show(){
    cout<<"b="<<b<<endl;
  }
};

int main(){
  function f;
  function_overriding f1;
  f.get();
  f1.get();
  f.show();
  f1.show();


  return 0;
}