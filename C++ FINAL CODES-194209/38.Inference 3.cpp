//38.INFERENCE 3
#include <iostream>//header
using namespace std;//using standard namespace
// base class
class Vehicle {
private: int a;//private data int a
public:
void setdata()   //set data user input from main
{
cout << "Speed of vehicle is" << endl;
cin>>a;
}
};//end of Vehicle
// sub class derived from the base classes
class Car: protected Vehicle{  //Access specifier is protected ,inherits Vehicle
};
// main function
int main()
{
Car obj;//object of sub class
obj.setdata(); //cant access protected data from outside 
return 0;
}

//Inference 3  -- protected data cannot be accessed outside sub class, only can be accessed from functions  
