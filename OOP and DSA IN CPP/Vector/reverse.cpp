#include <vector>
#include <iostream>
using namespace std;

void reverse(vector <int> & ve){
    
int e=ve.size()-1;
int s=0;

    while (s < e) {
        int temp = ve[s];
        ve[s] = ve[e];
        ve[e] = temp;
        s++;
        e--;
    }
}


int main() {
    
vector <int> ve;
int n,count=0;
cout<<"Enter size of vector:";
cin>>n;

for(int i=0;i<n;i++){
  int num;
cout<<"Enter number:";
cin>>num;
ve.push_back(num);
}

reverse(ve);

for(int val:ve){
    cout<<val<<" ";
}

return 0;
}
