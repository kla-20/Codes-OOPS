//41. Inference 6
//In Inference 5 we cant access private data outside class but can access inderectly through a public function from outside which can access private data
#include <iostream>//header
using namespace std;//using standard namespace
class Vehicle {
protected: int a;//protected data int a
public:
void setdata()//set data user input from main
{
cout<< "Speed of vehicle is" << endl;
cin>>a;
}
}; //end of Vehicle
// sub class derived from tho base classes
class Car: private Vehicle{ //Access specifier is private ,inherits Vehicle whatever is inherited is in private cant be accessed outside class
	public:
		void access(){ //A function of a class can access private , protected ,public variables
			setdata(); //Access private data of car
			cout<<"\nEnter the value of a : "<<endl;  //Enter value of a
			cin>>a; //private variable in car can be accessed from access function
 		}
 		void display(){ //display value of private variable 
 			cout<<a<<endl; 
		 }
};
// main function
int main()
{
// creating object of sub class will
// invoke the constructor of base classes
Car obj;//object of sub class
//obj.setdata();//Cant access anytin since private data cant be accessed like tat of a public data  
//cout<<obj.a; //cant access like tat of  a public variable 
//If want to access setdata use
//obj.setdata(); //cant be done
obj.access();  //FUnction to access private data 
obj.display(); //to verify whether private data is accessed or not
return 0;
} 

//INFERENCE 6 -- A private  data of a class cannot be directly accessed but indirectly accessed from outside class from main through any public function
