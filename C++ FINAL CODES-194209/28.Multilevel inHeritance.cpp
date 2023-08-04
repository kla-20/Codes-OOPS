//28.Multilevel inheritance
// base class is used , a child class to that and other child class to that
#include<iostream> //header
using namespace std; //standard namespace 
class vehicle{  //base class vehicle
	public:
		vehicle(){  //constructor to show when obj of sub class is declared the below is displayed
			cout<<"This is a vehicle"<<endl;
		}
}; //end of vehicle

class four_wheeler:public vehicle{  //now all Mf and Mv are public for fourwheeler , child  of vehicle 
	public:
		four_wheeler(){  //constructor for parent class of car and child class of vehicle
			cout<<"This is  a four wheeleer"<<endl; 
		}
};
 // child class of fourwheeler
class car:public four_wheeler{   //sub class syntax access specifier public i.e every MV and Mf are public in car class private of vehicle,fourwheeler cant be accessed  
	public:
		car(){ //constructor to show when car obj is initialised
			cout<<"This is a car"<<endl;
		}
}; //end of sub class car

int main(){
	car obj;  //Object of car is created is used to invoke the parent constructor and its parent if any and child cons
	return 0;  
}
