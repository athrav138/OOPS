# include <iostream>
using namespace std;

class function_overloading{
 public:
void sum(int a,int b){
  cout<<"Sum:"<<a+b<<endl;
}

void sum(int a,int b,int c){
  cout<<"Sum is:"<<a+b+c<<endl;
}

void sum(string a,string b){
  cout<<"Sum of string:"<<a+b<<endl;
}
  
};

int main(){

  function_overloading f1;
  f1.sum(2,3);
  f1.sum(1,2,3);
  f1.sum("Atharv ","Suryavanshi");

 return 0;
}