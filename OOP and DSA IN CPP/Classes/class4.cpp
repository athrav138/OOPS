# include <iostream>
using namespace std;

class student{
public:
  int roll;
  float percent;
  string name;

};

void print(student s[],int n);
void input(student s[],int n);

int main(){

  int n;
  cout<<"Enter number of students information you want to store:";
  cin>>n;
  student s[n];
  input(s,n);
  print(s,n);

  int n1;
  cout<<"Enter number of students information you want to store:";
  cin>>n1;
  student s1[n1];
  input(s1,n1);
  print(s1,n1);
  

  return 0;
}


void input(student s[],int n){
     for(int i=0;i<n;i++){
  cout<<"\nEnter information of "<<i+1<<" student :"<<endl;
  cout<<"Enter roll no:";
  cin>>s[i].roll;
  cout<<"Enter percent: ";
  cin>>s[i].percent;
  cout<<"Enter name: ";
  cin>>s[i].name;
  }
}

void print(student s[],int n){
for(int i=0;i<n;i++){
  cout<<"\nInformation of "<<i+1<<" student :"<<endl;
  cout<<"Name:-"<<s[i].name<<endl;
  cout<<"Roll:-"<<s[i].roll<<endl;
  cout<<"Percentage:-"<<s[i].percent<<endl;
  }
}
