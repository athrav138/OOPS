# include <iostream>
using namespace std;

class student{
public:
  int roll;
  float percent;
  string name;

};

int main(){

  student s1;
  s1.roll=1;
  s1.percent=95.88;
  s1.name="Atharv";

  cout<<"Name:-"<<s1.name<<endl;
  cout<<"Roll:-"<<s1.roll<<endl;
  cout<<"Percentage:-"<<s1.percent<<endl<<endl;



  student s2;
  s2.roll=2;
  s2.percent=98;
  s2.name="Milind";

  cout<<"Name:-"<<s2.name<<endl;
  cout<<"Roll:-"<<s2.roll<<endl;
  cout<<"Percentage:-"<<s2.percent<<endl;
  
  return 0;
}