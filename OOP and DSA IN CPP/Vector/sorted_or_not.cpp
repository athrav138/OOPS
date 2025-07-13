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

  int count=0;
  for(int i=0;i<n-1;i++){
    if(ve[i]>ve[i+1]){
        count++;
        break;
    }
  }
  
  if(count==0){
      cout<<"\nThe vector is sorted in ascending odrer";
  }
  else{
      count=0;
      for(int i=0;i<n-1;i++){
    if(ve[i]<ve[i+1]){
        count++;
        break;
    }
  }
  
  if(count==0){
      cout<<"\nThe vector is sorted in descending odrer";
  }
  else{
    cout<<"\nThe vector is not sorted in odrer";
    }
      
  }
  
  return 0;
}