//30 .Multiple Ineritance
//Two base classes , 1 sub class , when obj of sub class is created it invokes both parents
//By displaying their respective constructors

#include<iostream> //header
using namespace std; //standard namespace 

class vehicle{ //base class ,1,parent 
	public:
		vehicle(){  //cons to show when their sub classes objects are created
			cout<<"This is a vehicle"<<endl; 
		}
		
}; //end of vehicle

class four_wheeler{  //pArent class 2 , 
	public:
		four_wheeler(){  //constructor for parent class to display when obj of sub class is created
			cout<<"This is  a four wheeleer"<<endl; 
		}
};
 // child class of vehicle, four_wheeler
 
 class car : public vehicle, public four_wheeler{  //it inherits both vehicle and fourwheeler
 };
 //Just to reverse order
 /* class bus :  public four_wheeler,public vehicle{  //it inherits both vehicle and fourwheeler
 }; */
 
 int main(){
 	car obj1;  //it invokes both parents four_wheeler, vehicle
	//bus obj2 ; //  it invokes both parents four_wheeler, vehicle  , but order is reversed 1. calls four_wheeler 2)vehicle
	return 0;
 }
 
