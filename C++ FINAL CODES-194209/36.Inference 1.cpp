//36. inference1 
// C++ program to explain Single inheritance
#include <iostream>//header
using namespace std; //using standard namespace 
// base class
class Vehicle { //class vehicle
private: 
int a; //private data int a
public:
void setdata() //set data user input from main
{
cout << "Speed of vehicle is" << endl;
cin>>a;
}
}; //end of Vehicle
// sub class derived from tho base classes
class Car: public Vehicle{ //Access specifier is public ,inherits Vehicle
};
// main function
int main()
{
Car obj; //object of sub class
//obj.setdata();//We can set data of private variable by a call of function through which we can access private data
cout<<obj.a;//We cannot access private variable outside class in main  
return 0;
}

//INFERENCES: 1 --gIVES eRROR FOR LINE 24  private cant be accessed by sub classes directly , outside of class it can definately not accept  
//We can set data of private variable by a call of function through which we can access private data
//We cannot access private variable outside class in main 
