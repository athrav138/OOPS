# include <iostream>
using  namespace std;

# include <string>
# include <iomanip>

class Student{
    protected:
    string s;
    int roll_no;
    float marks;
    public:
    void accept1(){
        cout<<"Enter Student name:";
        getline(cin,s);
        cout<<"Enter roll no:";
        cin>>roll_no;
        cout<<"Enter marks:";
        cin>>marks;
        cin.ignore();
    }
    
    void display1(){
        cout<<"\nStudent information is:\n";
        cout<<setw(5)<<"Student name: "<<s<<endl;
        cout<<setw(5)<<"Student roll no:"<<endl<<roll_no<<endl;
        cout<<setw(5)<<"Student marks: "<<marks<<endl;
    }
};

class Faculty{
    protected:
    string f;
    int id;
    float salary;
    public:
    void accept2(){
        cout<<"Enter Faculty name:";
        getline(cin,f);
        cout<<"Enter Faculty id :";
        cin>>id;
        cout<<"Enter Faculty Salary:";
        cin>>salary;
        cin.ignore();
    }
    
    void display2(){
        cout<<"\n Faculty information is:\n";
        cout<<setw(5)<<"Faculty name: "<<f<<endl;
        cout<<setw(5)<<"Faculty id :\n"<<id<<endl;
        cout<<setw(5)<<"Faculty Salary: "<<salary<<endl;
    }
};

class College : public Student,public Faculty{
    string c;
    
    public:
    
    void accept3(){
        cout<<"Enter college name:";
        getline(cin,c);
        cin.ignore();
    }
    
    void display3(){
        cout<<"\n College information is:\n";
        cout<<setw(5)<<"College name: "<<c<<endl;
    }
};


int main(){
    College c;
    c.accept1();
    c.accept2();
    c.accept3();
    c.display3();
    c.display2();
    c.display1();

    return 0;
}




