// copying constructor


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

  cout<<"\nid:-"<<e.id<<endl;
  cout<<"name:-"<<e.name<<endl;
  cout<<"salary:-"<<e.salary<<endl;

  employee e1=e;// copy constructor type1 deep  copy s

  e1.name="Milind";

  cout<<"\nid:-"<<e1.id<<endl;
  cout<<"name:-"<<e1.name<<endl;
  cout<<"salary:-"<<e1.salary<<endl;


  employee e2(e);// copy constructor type2 deep copy 

  e2.name="Rucha";
  
  cout<<"\nid:-"<<e2.id<<endl;
  cout<<"name:-"<<e2.name<<endl;
  cout<<"salary:-"<<e2.salary<<endl;


  return 0;
}