# include <iostream>
# include <vector>
using namespace std;

int main(){
    
  int n;
  cout<<"Enter how many elment you want to insert in vector:";
  cin>>n;
  vector<int> ve;
  
  cout<<"size :"<<ve.size()<<endl;
  cout<<"capacity: "<<ve.capacity()<<endl;

  for(int i=0;i<n;i++){
      int num;
     cout<<"Enter number "<<i+1<<" : ";
     cin>>num;
     ve.push_back(num);
  }
  cout<<"size :"<<ve.size()<<endl;
  cout<<"capacity: "<<ve.capacity()<<endl;
  
  ve.pop_back();
  ve.resize(5);
  ve.erase(ve.begin()+2);
  cout<<"The elements of vector are: ";
  for(int i=0;i<ve.size();i++){
      cout<<" "<<ve[i]<<" ";
  }
cout<<"\nsize :"<<ve.size()<<endl;
  cout<<"capacity: "<<ve.capacity()<<endl;
  
  
  ve.insert(ve.begin()+2,45);
  for(int ele:ve){
      cout<<ele<<" ";
  }
  cout<<endl;

  return 0;
}