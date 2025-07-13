# include <iostream>
# include <fstream>
using namespace std;

int main(){

  ofstream myfile("file1.txt");

  myfile<<"This is the file for writing the content in the file and checking of proper execution of the ofstream function\n";

  myfile.close();
  
}