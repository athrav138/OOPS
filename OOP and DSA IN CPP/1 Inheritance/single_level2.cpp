# include <iostream>
using namespace std;

class scooty{

  public:
  int topspeed;
  float tank;

  private :
  int bootspace;
};

class bike: public scooty{
  public:
  int gears;

};

int main(){

  scooty s1;
  bike b1;
  
  s1.topspeed=60;
  s1.tank=4;
  
  b1.topspeed=90;
  b1.tank=5;
  b1.gears=4;

  cout<<"Scooty information: \n";
  cout<<"Top speed:"<<s1.topspeed;
  cout<<endl<<"Tank size:"<<s1.tank;
  
  cout<<endl<<endl<<"Bike information: \n";
  cout<<"Top speed:"<<b1.topspeed;
  cout<<endl<<"Number of gears: "<<b1.gears;
  cout<<endl<<"Tank size: "<<b1.tank;
  
}
