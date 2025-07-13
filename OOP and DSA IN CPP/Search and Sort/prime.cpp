# include <iostream>
using namespace std;

void prime(int n){
  int count=0;
for(int i=1;i<=n;i++){
  if(n%i==0){
    count++;
  }
}

 if(count==2){
   cout<<" "<<n;
 }
 
};

int main(){

  int start,end;

  cout<<"Enter start:";
  cin>>start;

  cout<<"Enter end:";
  cin>>end;

  cout<<"The prime numbers from "<<start<<" to "<<end<<" are :";
  for(int i=start;i<=end;i++){
    
     prime(i);
   
  }

  return 0;
}