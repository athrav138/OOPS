# include <iostream>
# include <vector>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;

  vector<int> ve(n);

  cout<<"Enter the elements of vector: \n";
  for(int i=0;i<n;i++){
     cout<<"Enter number "<<i+1<<" : ";
     cin>>ve[i];
  }
  
  
  cout<<"The elements of vector are: ";
  for(int i=0;i<n;i++){
      cout<<" "<<ve[i]<<" ";
  }

int x,count=0;
cout<<"\nEnter element you want to find greate element than that element: ";
cin>>x;

  for(int i=0;i<n;i++){
    if(ve[i]>x){
        count++;
    }
  }
  
  cout<<"The "<<count<<" elements are occur in vector which is greater than "<<x<<" .";

  return 0;
}