# include <iostream>
using namespace std;

class student{
    public:

    int roll;
    string name;
    
    void get1(int r,string n){
        roll=r;
        name=n;
    }
    
    void put1(){
        cout<<"<---- Student details----->\n";
        cout<<"Roll No.-"<<roll<<endl;
        cout<<"Name - "<<name<<endl;
    }
};

class marks:public student{
    public:
    float marks;
    void get2(float m){
        marks=m;
    }
    
    void put2(){
        put1();
        cout<<"Marks: "<<marks;
    }
    
};

int main(){
    marks m1;
    int roll;
    string name;
    float marks;
    
    cout<<"Enter roll number: ";
    cin>>roll;
    cin.ignore(); 
    
    cout<<"Enter name: ";
    getline(cin,name);
    
    cout<<"Enter marks: ";
    cin>>marks;
    
    m1.get1(roll,name);
    m1.get2(marks);
    
    m1.put2();
    
    
    
    return 0;
}


