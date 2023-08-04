//44.3 In single inheritance derived class has constructor , base class doesnt have


#include<iostream> //header
using namespace std; //standard namespace

class base{ //base class
	public:
		//no constructors
		void show(); //function show ,return type void . no object parameters
};  //end of base class
class derived:public base{  //derived class from base , access specifier public
	public:
		derived(){  //constructor for derived class
			cout<<"constructor of derived class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
}; //end of derived class

int main(){
	derived d; //object of derived class
	return 0;
}  
