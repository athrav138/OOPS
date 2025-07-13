#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // 1) push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 2) size()
    cout << "Size: " << v.size() << endl;

    // 3) front()
    cout << "Front: " << v.front() << endl;

    // 4) back()
    cout << "Back: " << v.back() << endl;

    // 5) at()
    cout << "Element at index 1: " << v.at(1) << endl;

    // 6) empty()
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 7) insert()
    v.insert(v.begin() + 1, 15); // insert 15 at position 1

    // 8) erase()
    v.erase(v.begin() + 2); // erase element at index 2

    // Print vector elements
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 9) pop_back()
    v.pop_back();

    // 10) resize()
    v.resize(5); // increase size to 5 (new elements = 0 by default)

    // 11) assign()
    v.assign(3, 100); // replace with 3 elements of value 100

    // 12) clear()
    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    // 13) swap()
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5};
    a.swap(b);
    cout << "Vector a after swap: ";
    for (int i : a) cout << i << " ";
    cout << endl;

    // 14) capacity()
    vector<int> c;
    c.push_back(10);
    cout << "Capacity: " << c.capacity() << endl;

    // 15) shrink_to_fit()
    c.resize(1);
    c.shrink_to_fit();
    cout << "Size after shrink_to_fit: " << c.size() << endl;

    return 0;
}
