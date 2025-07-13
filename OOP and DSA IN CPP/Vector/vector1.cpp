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


  return 0;
}