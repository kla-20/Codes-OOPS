//27. Single inheritance
//child class inherits from parent or base class
//use of constructor to show inheritance
#include<iostream> //header
using namespace std; //standard namespace 
class vehicle{  //base class vehicle
	public:
		vehicle(){  //constructor to show when obj of sub class is declared the below is displayed
			cout<<"This is a vehicle"<<endl;
		}
}; //end of vehicle
 // child class 
class car:public vehicle{   //sub class syntax access specifier public i.e every MV and Mf are public in car class private of vehicle cant be accessed  
	public:
		car(){ //constructor to show when car obj is initialised
			cout<<"This is a car"<<endl;
		}
}; //end of sub class car

int main(){
	car obj;  //Object of car is created is used to invoke the parent constructor and child cons
	return 0;  
}
