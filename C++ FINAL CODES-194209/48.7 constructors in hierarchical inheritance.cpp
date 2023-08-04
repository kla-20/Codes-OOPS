//48.7 constructors in hierarchical inheritance 

#include<iostream> //header
using namespace std; //standard namespace
class base{ //base class
	public:
		base(){  //constructor for base class
			cout<<"constructor of base class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
};  //end of base class
class derived1:public base{  //derived1 class from base , access specifier public
	public:
		derived1(){  //constructor for derived1 class
			cout<<"constructor of derived1 class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
}; //end of derived1 class
class derived2:public base{  //derived2 class from base , access specifier public
	public:
		derived2(){  //constructor for derived2 class
			cout<<"constructor of derived2 class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
}; //end of derived2 class
int main(){
	derived1 d1; //object of derived1 class
	derived2 d2; //object of derived2 class
	return 0;
} 
