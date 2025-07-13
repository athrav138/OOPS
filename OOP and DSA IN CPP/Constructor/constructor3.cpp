// Multiple constructor


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

    employee(int i,string n){

      id=i;
      name=n;

    }

     employee(int i,float s,string n){

      id=i;
      name=n;
      salary=s;

    }
    employee(float s,string n){

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

  employee e1={id,name};

  cout<<"id:-"<<e1.id<<endl;
  cout<<"name:-"<<e1.name<<endl;
  cout<<"salary:-"<<e1.salary<<endl;

   employee e2(salary,name);

  cout<<"id:-"<<e2.id<<endl;
  cout<<"name:-"<<e2.name<<endl;
  cout<<"salary:-"<<e2.salary<<endl;


  return 0;
}