# include <iostream>
using namespace std;

class student{
  public:
  string name;
  string depat;
  long long enroll_no;
};

class faculty{
  public:
  string f1_name;
  string subject;
  float salary;
};

class dept : public student,public faculty {
  public:
  string dept_n;
};

class college : public dept{
  public: 
  string col;

  void s1_display(){

    cout<<"The student Information: \n";
    cout<<"Name: "<<name<<endl;
    cout<<"Department :"<<depat<<endl;
    cout<<"Enrollment no: "<<enroll_no<<endl<<endl;

  }

  void f1_display(){

    cout<<"The faculty Information: \n";
    cout<<"Name: "<<f1_name<<endl;
    cout<<"Subject :"<<subject<<endl;
    cout<<"Salary : "<<salary<<endl<<endl;

  }

   void d1_display(){

    cout<<"The Department Information: \n";
    cout<<"Department name: "<<dept_n<<endl<<endl;
  }

  void c1_display(){

    cout<<"The college Information: \n";
    cout<<"Name: "<<col<<endl;
    
  }
};

int main(){

  student s1;
  faculty f1;
  dept d1;
  college c1;
  c1.name="Atharv";
  c1.enroll_no=24213200231;
  c1.depat="CSE";

  c1.f1_name="Farande";
  c1.subject="Maths";
  c1.salary=50000;

  c1.dept_n="CSE";

  c1.col="YCP";

  c1.s1_display();
  c1.f1_display();
  c1.d1_display();
  c1.c1_display();

  return 0;
}
