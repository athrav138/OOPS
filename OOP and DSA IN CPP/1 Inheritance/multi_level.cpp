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


class marks1:public marks{
    public:
    float percent;
    void get3(float p){
        percent=p;
    }
    
    void put3(){
        put2();
        cout<<"\nPercentage: "<<percent;

    }
    
};

int main(){
    marks1 m1;
    int roll;
    string name;
    float marks,percent;
    
    cout<<"Enter roll number: ";
    cin>>roll;
    cin.ignore(); 
    
    cout<<"Enter name: ";
    getline(cin,name);
    
    cout<<"Enter marks: ";
    cin>>marks;
    
    cout<<"Enter percentage: ";
    cin>>percent;
    
    m1.get1(roll,name);
    m1.get2(marks);
    m1.get3(percent);
    
    m1.put3();
    
    
    
    return 0;
}


