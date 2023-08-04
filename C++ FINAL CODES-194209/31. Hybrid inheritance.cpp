//31. hybrid inheritance
//Both Single and Multiple INheritance are obbserved

#include<iostream> //header
using namespace std; //standard namespace 

class vehicle{ //base class 1
	public:
		vehicle(){ //cons to display when obj of its sub class is created
			cout<<"This is a vehicle"<<endl;
		}
}; //end of vehicle

class fare{  //base class 2
	public:
		fare(){  //cons when its sub class obj is created
			cout<<"Fare of the vehicle"<<endl;
		}
}; //end of fare

class car: public vehicle{   // sub class of vehicle shows single inheritance ,access specifier public
};
//Multiple inheritance
class bus: public vehicle, public fare {  // sub class of both base classes vehicle , fare access specifier for both are public 
};

int main(){
	car obj; //it invokes only vehicle  since single inheritance 
	cout<<"Multiple inheritance"<<endl; 
	bus obj1; //it invokes both vehicle and fare since multiple inheritance
	return 0;  
}
