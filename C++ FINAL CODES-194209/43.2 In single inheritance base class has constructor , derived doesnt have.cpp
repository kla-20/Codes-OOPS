//43.2 In single inheritance base class has constructor , derived doesnt have  


#include<iostream> //header
using namespace std; //standard namespace

class base{ //base class
	public:
		base(){  //constructor for base class
			cout<<"constructor of base class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
};  //end of base class
class derived:public base{  //derived class from base , access specifier public
	public:
		//no constructors
		void show(); //function show ,return type void . no object parameters
}; //end of derived class

int main(){
	derived d; //object of derived class
	return 0;
}
