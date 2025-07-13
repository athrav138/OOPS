# include <iostream>
using namespace std;

int main(){
  int n,low,high,mid,count=0,key;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];

cout<<"Enter the array elements in the descending order: \n";
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<" :";
    cin>>arr[i];
  }

  cout<<"Enter key to search:";
  cin>>key;

  low=0;
  high=n-1;
  while(low<=high){
      mid=(low+high)/2;
    if(arr[mid]==key){
      cout<<"The key is found at index "<<mid<<" \n";
      count++;
      break;
    }
    else if(arr[mid]<key){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }

  if(count==0){
    cout<<"The element is not found is array\n";
  }
  

  return 0;
}