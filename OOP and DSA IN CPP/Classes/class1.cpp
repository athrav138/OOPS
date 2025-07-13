# include <iostream>
using namespace std;

class student {
  public:
  int roll;
  string name;

  void put(int r,string n){
    roll=r;
    name=n;
  }

  void get(){
    cout<<"Roll_no="<<roll;
    cout<<"\nName="<<name;
  }

};

int main(){
  student s1;
 int  s_roll;
 string s_name;

 cout<<"Enter roll no: ";
 cin>>s_roll;

 cout<<"Enter name :";
 getline(cin,s_name);;


 s1.put(s_roll,s_name);

 s1.get();

  


  return 0;
}