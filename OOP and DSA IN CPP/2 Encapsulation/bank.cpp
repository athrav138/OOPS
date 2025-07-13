// Encapsulation is the process of binding the data members and member functions in a capsule called class

#include <iostream>
#include <string>
using namespace std;

class Account {
  string password;
  double balance;

public:
  string username;
  float a_no;

  Account() {
    cout << "Enter password: ";
    getline(cin, password);

    cout << "Enter balance: ";
    cin >> balance;
    cin.ignore(); // FIX: To prevent getline skip

    cout << "Enter username: ";
    getline(cin, username);

    cout << "Enter account No: ";
    cin >> a_no;
  }

  void display() {
    cout << "\nAccount Information:\n";
    cout << "Username       : " << username;
    cout << "\nAccount number : " << a_no;
    cout << "\nPassword       : ******";
    cout << "\nBalance        : ******";
  }
};

int main() {
  Account a;
  a.display();
  return 0;
}
