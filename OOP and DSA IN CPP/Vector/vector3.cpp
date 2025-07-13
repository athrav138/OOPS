# include <iostream>
# include <vector>
using namespace std;

int main(){

  vector <int> ve(3);

  cout<<"size :"<<ve.size();
  cout<<endl<<"capacity: "<<ve.capacity()<<endl;
  cout<<"Enter a number: ";
  cin>>ve[0];
  cout<<ve[0];
   cout<<"\nsize :"<<ve.size();
  cout<<endl<<"capacity: "<<ve.capacity()<<endl;
  cout<<"Enter a number: ";
  cin>>ve[1];
  cout<<ve[1];
  cout<<"\nsize :"<<ve.size();
  cout<<endl<<"capacity: "<<ve.capacity()<<endl;
  
  cout<<"Enter a number: ";
  cin>>ve[2];
  cout<<ve[2];
  cout<<"\nsize :"<<ve.size();
  cout<<endl<<"capacity: "<<ve.capacity()<<endl;

  ve.push_back(6);
  ve.push_back(6);
  ve.push_back(6);
  ve.push_back(6);

  cout<<"\nsize :"<<ve.size();
  cout<<endl<<"capacity: "<<ve.capacity()<<endl;

for(int i=0;i<ve.size();i++){
    cout<<" "<<ve[i];
}
  return 0;
}