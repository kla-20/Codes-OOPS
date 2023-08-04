//37.Inference 2
#include <iostream>//header
using namespace std; //using standard namespace 
// base class
class Vehicle {
protected: int a;   //private data int a
public:
void setdata()  //set data user input from main
{
cout << "Speed of vehicle is" << endl;
cin>>a;
}
};//end of Vehicle 
// sub class derived from tho base classes
class Car: public Vehicle{   //Access specifier is public ,inherits Vehicle
};
// main function
int main()
{
// creating object of sub class will
// invoke the constructor of base classes
Car obj; //object of sub class
obj.setdata(); //We can set data of private variable by a call of function through which we can access private data
//cout<<obj.a; //cant happen
return 0;
}

//INFERENCE 2-- Doesnt give error ,  We can set data of private variable by a call of function through which we can access private data
