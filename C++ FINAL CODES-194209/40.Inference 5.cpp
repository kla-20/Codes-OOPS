//40 .Inference 5

#include <iostream>//header
using namespace std;//using standard namespace
// base class
class Vehicle {
protected: int a;//protected data int a
public:
void setdata()//set data user input from main
{
cout << "Speed of vehicle is" << endl;
cin>>a;
}
}; //end of Vehicle
// sub class derived from tho base classes
class Car: private Vehicle{ //Access specifier is private ,inherits Vehicle whatever is inherited is in private cant be accessed outside class
};
// main function
int main()
{
// creating object of sub class will
// invoke the constructor of base classes
Car obj;//object of sub class
obj.setdata();//Cant access anytin since private data cant be accessed like tat of a public data  
cout<<obj.a; //cant access like tat of  a public variable 
//If want to access setdata use
Vehicle obj1; //Object of parent class
obj1.setdata(); //but it is not inheritance
return 0;
}

//Inference 5__ Private data cant be accessed by a object in main, here protected data ,public data of parent are now private data of class car
  
