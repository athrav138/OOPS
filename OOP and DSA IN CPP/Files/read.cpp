# include <iostream>
# include <fstream>
using namespace std;

int main(){

  ifstream myreadfile("file2.txt");

  string s;

  cout<<"The data in file2.txt file is :\n";
  while(getline(myreadfile,s)){
  cout<<"\n"<<s;
  };


  myreadfile.close();

  return 0;
}