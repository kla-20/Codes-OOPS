//29. hierarchical inheritance
// 1 base class is used and 2 sub classes are inherit from the main base class
#include<iostream> //header
using namespace std; //standard namespace 

class vehicle{ //base class ,parent 
	public:
		vehicle(){  //cons to show when their sub classes objects are created
			cout<<"This is a vehicle"<<endl; 
		}
		
}; //end of vehicle
//child of vehicle
class car: public vehicle{ //sub class car , inherits properties MF , MV of vehicle ,access specifier is public
};

//child of vehicle
class bus: public vehicle{//sub class bus , inherits properties MF , MV of vehicle ,access specifier is public
};

int main(){
	car obj1; //obj1 of car  invokes its parent class by invoking vehicle 
	bus obj2; //obj2 of bus  invokes its parent class by invoking vehicle 
	return 0;
}


