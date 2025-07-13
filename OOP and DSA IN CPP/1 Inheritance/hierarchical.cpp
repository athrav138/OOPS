#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
    string s;
    int roll_no;
public:
    void accept1() {
        cout << "Enter Student name: ";
        getline(cin, s);
        cout << "Enter roll no: ";
        cin >> roll_no;
        cin.ignore();
    }

    void display1() {
        cout << "\nStudent information is:\n";
        cout << setw(5) << "Name: " << s << endl;
        cout << setw(5) << "Roll No: " << roll_no << endl;
    }
};

class Marks : public Student {
    string subject;
    int rank;

public:
    void accept2() {
        accept1(); // Accept student data
        cout << "Enter subject name: ";
        getline(cin, subject);
        cout << "Enter Rank in class: ";
        cin >> rank;
        cin.ignore();
    }

    void display2() {
        display1(); // Show student data
        cout << "\nMarks information:\n";
        cout << setw(5) << "Subject: " << subject << endl;
        cout << setw(5) << "Rank: " << rank << endl;
    }
};

class Sports : public Student {
    string game;
    int rank;

public:
    void accept3() {
        accept1(); // Accept student data
        cout << "Enter Game name: ";
        getline(cin, game);
        cout << "Enter Rank in sport: ";
        cin >> rank;
        cin.ignore();
    }

    void display3() {
        display1(); // Show student data
        cout << "\nSports information:\n";
        cout << setw(5) << "Game: " << game << endl;
        cout << setw(5) << "Rank: " << rank << endl;
    }
};

int main() {
    // Use either Marks or Sports (as per hierarchical inheritance)
    Marks m;
    Sports s;

    cout << "--- Student Academic Info ---\n";
    m.accept2();
    m.display2();

    cout << "\n--- Student Sports Info ---\n";
    s.accept3();
    s.display3();

    return 0;
}
