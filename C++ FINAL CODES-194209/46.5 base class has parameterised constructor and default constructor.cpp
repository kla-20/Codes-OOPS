//46.5 base class has parameterised constructor and default constructor
// but derived class has only default constructor

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
		derived(){  //constructor for derived class
			cout<<"constructor of derived class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
}; //end of derived class
int main(){
	derived d; //object of derived class
	return 0;
}   
