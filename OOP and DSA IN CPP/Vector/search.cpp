#include <vector>
#include <iostream>
using namespace std;

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
int number;
cout<<"Enter number to search:";
cin>>number;

for(int i=0;i<ve.size();i++){
    if(ve[i]==number){
        cout<<"Number is found at index :"<<i<<" \n";
        count++;
    }
}

if(count>0){
    cout<<"The number is found  "<<count<<" times\n";
}
else{
    cout<<"The number is not found ";
}

return 0;
}
