//47.6 parameterised constructor of base class is invoked by that of the  derived class

#include<iostream> //header
using namespace std; //standard namespace
class base{ //base class
	public:
		base(){  //default constructor for base class
			cout<<"constructor of base class"<<endl;
		}
		base(int a){ //parameterised constructor for base class parameter a type int
			cout<<"parameterised constructor for base class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
};  //end of base class
class derived:public base{  //derived class from base , access specifier public
	public:
		derived(int a):base(a){  //constructor for derived class ,invoking base class parameterised constructor
			cout<<"constructor of derived class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
}; //end of derived class
int main(){
	derived d(9); //object of derived class
	return 0;
}   
