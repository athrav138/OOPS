# include <iostream>
# include <string>
using namespace std;

class cricketer{
  public:

  string name;
  int total_runs;
  float avg;

  cricketer(string name,int total_runs,float avg){
    this->name=name;
    this->total_runs=total_runs;
    this->avg=avg;
  }

  void put(string n,int t,float a){
    cout<<"The cricketer information is: \n";
    cout<<"Name="<<n;
    cout<<endl<<"Total runs="<<t;
    cout<<endl<<"Average is="<<a;
  }

};

int main(){

  //object pointer using in the passing the parameters to constructor
  

  cricketer *ptr=new cricketer("Virat Kohli",25000,49.7);

  ptr->put(ptr->name,ptr->total_runs,ptr->avg);


  return 0;
}