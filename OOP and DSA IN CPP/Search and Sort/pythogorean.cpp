# include <iostream>
using namespace std;

bool check(int a,int b,int c){
  int x=max(a,max(b,c));
  int y,z;
  
  if(x==a){
    y=b;
    z=c;
  }
  else if(x==b){
    y=a;
    z=c;
  }
  else{
    y=b;
    z=a;
  }

  if(x*x==(y*y)+(z*z)){
  return true;
  }
  else{
    return false;
  }
  
};

int main(){

  int a,b,c;

  cout<<"Enter three numbers which you want to find that is the pythogorean triplet or not:";
  cin>>a>>b>>c;

  if(check(a,b,c)){
   cout<<"Your given triplet is a pythogorean triplet";
  }
  else{
       cout<<"Your given triplet is not a pythogorean triplet";
  }

  return 0;
}