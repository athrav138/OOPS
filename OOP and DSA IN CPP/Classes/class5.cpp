# include <iostream>
using namespace std;

class student{
public:
  int roll;
  float percent;
  string name;

};

void change(student s1);
void change1(student& s1);

int main(){

  student s1;
  s1.roll=1;
  s1.percent=95.88;
  s1.name="Atharv";

  cout<<"Name:-"<<s1.name<<endl;
  cout<<"Roll:-"<<s1.roll<<endl;
  cout<<"Percentage:-"<<s1.percent<<endl<<endl;

  change(s1);
  
  cout<<"Name:-"<<s1.name<<endl;
  cout<<"Roll:-"<<s1.roll<<endl;
  cout<<"Percentage:-"<<s1.percent<<endl<<endl;

  change1(s1);
  
  cout<<"Name:-"<<s1.name<<endl;
  cout<<"Roll:-"<<s1.roll<<endl;
  cout<<"Percentage:-"<<s1.percent<<endl<<endl;
  
  
  return 0;
}

void change(student s1){
  s1.name="Milind";
}

void change1(student& s1){
  s1.name="Milind";
}