#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char* name;

public:
    // Constructor
    Student(const char* n) {
        name = new char[strlen(n) + 1]; // Allocate memory
        strcpy(name, n); // Copy string
    }

    // ✅ Deep Copy Constructor
    Student(const Student& s) {
        name = new char[strlen(s.name) + 1]; // Allocate new memory// memory management operator new
        strcpy(name, s.name); // Copy content
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
    }

    // Destructor to free memory //memory management operator delete
    ~Student() {
        delete[] name;
    }
};

int main() {
    Student s1("Atharv");
    Student s2 = s1; // Deep copy is called here

    cout << "Original Object (s1): ";
    s1.display();

    cout << "Copied Object (s2): ";
    s2.display();

    return 0;
}
