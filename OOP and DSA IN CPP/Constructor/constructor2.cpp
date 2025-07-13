# include <iostream>
using namespace std;

class employee{
  public:

    int id;
    string name;
    float salary;

    //constructor 

    employee(int i,string n,float s){

      id=i;
      name=n;
      salary=s;

    }
};

int main(){

  int id;
  string name;
  float salary;

  cout<<"Enter id of employee: ";
  cin>>id;

  cout<<"Enter name of employee: ";
  cin>>name;

  cout<<"Enter salary of employee: ";
  cin>>salary;

  employee e={id,name,salary};

  cout<<"id:-"<<e.id<<endl;
  cout<<"name:-"<<e.name<<endl;
  cout<<"salary:-"<<e.salary<<endl;

  return 0;
}