//39.Inference 4

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
	public:
		void to_access(){  //function used to access protected function set_data
			setdata();  //calls setdata protected from to access function 
		}
};
// main function
int main()
{
Car obj;//object of sub class
//obj.setdata(); //cant access protected data from outside 
//but
obj.to_access(); //can access set data from outside through to access function
return 0;
}

//Inference 4-- A protected data of a class cannot be accessed directly from main, instead from a function of a class in public 
