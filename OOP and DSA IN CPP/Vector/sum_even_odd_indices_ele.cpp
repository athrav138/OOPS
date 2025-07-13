# include <iostream>
# include <vector>
using namespace std;

int main(){
    
    int n,sume=0,sumo=0;
    cout<<"Enter the size of vector: ";
    cin>>n;

  vector<int> ve(n);

  cout<<"Enter the elements of vector: \n";
  for(int i=0;i<n;i++){
     cout<<"Enter number "<<i+1<<" : ";
     cin>>ve[i];
  }
  
  
  cout<<"The elements of vector are: ";
  for(int i=0;i<n-1;i++){
      cout<<" "<<ve[i]<<" ";
  }

  for(int i=0;i<n;i++){
    if(i%2==0){
        sume+=ve[i];
    }
  }
  
  for(int i=0;i<n;i++){
    if(i%2!=0){
        sumo+=ve[i];
    }
  }
  
  cout<<"\nThe sum of even indices element is: "<<sume;
  cout<<"\nThe sum of odd indices element is: "<<sumo;
  
  
  return 0;
}