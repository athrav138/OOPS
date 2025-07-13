#include <iostream>
using namespace std;

class Counter {
public:
    Counter() {
        cout << "Constructor called\n";
    }

    void show() {
        cout << "I am a static object\n";
    }

    ~Counter() {
        cout << "Destructor called\n";
    }
};

void test() {
    static Counter c;  // Created only once, even if function is called multiple times
    c.show();
}

int main() {
    test();
    test();
    test();

    return 0;
}
