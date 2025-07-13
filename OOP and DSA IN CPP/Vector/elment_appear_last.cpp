# include <iostream>
# include <vector>
using namespace std;

int main(){
    
    vector<int> v(5);
    
    for(int i=0;i<5;i++){
        cout<<"Enter element "<<i<<" : ";
        cin>>v[i];
    }
    
    int x,occur=-1;
    cout<<"Enter element you want to search: ";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(x==v[i]){
            occur=i;
        }
    }
    
    cout<<"The "<<x<<" apears last in vector is "<<occur<<" .\n";

for(int i=v.size()-1;i>=0;i--){
        if(x==v[i]){
            occur=i;
            break;
        }
    }
    
    cout<<"The "<<x<<" apears last in vector is "<<occur<<" .\n";
 

  return 0;
}
