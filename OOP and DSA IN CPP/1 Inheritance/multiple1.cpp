#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void getStudent(int r, string n) {
        roll = r;
        name = n;
    }

    void putStudent() {
        cout << "<---- Student details ----->\n";
        cout << "Roll No.: " << roll << endl;
        cout << "Name    : " << name << endl;
    }
};

class Marks {
public:
    float marks;

    void getMarks(float m) {
        marks = m;
    }

    void putMarks() {
        cout << "Marks   : " << marks << endl;
    }
};

// ✅ Multiple Inheritance: Result inherits from Student and Marks
class Result : public Student, public Marks {
public:
    float percent;

    void getResult(float p) {
        percent = p;
    }

    void putResult() {
        putStudent();
        putMarks();
        cout << "Percent : " << percent << endl;
    }
};

int main() {
    Result r;
    int roll;
    string name;
    float marks, percent;

    cout << "Enter roll number: ";
    cin >> roll;
    cin.ignore();

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter percentage: ";
    cin >> percent;

    r.getStudent(roll, name);
    r.getMarks(marks);
    r.getResult(percent);

    r.putResult();

    return 0;
}
