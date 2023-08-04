//50.9  constructors in multiple inheritance
//base 1 class has default constructor
//base 2 class has parameterised constructor

#include<iostream> //header
using namespace std; //standard namespace
class base1{ //base1 class
	public:
		base1(){  //constructor for base1 class
			cout<<"constructor of base1 class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
};  //end of base1 class
class base2{ //base2 class
	public:
		base2(int k){  //constructor for base2 class
			cout<<" parameterised constructor of base2 class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
};  //end of base2 class
class derived:public base2,virtual public base1{  //derived class from base1 ,base2 , access specifier public
	public:
		derived(int a):base2(a),base1(){  //constructor for derived class invoking parameterised constructor for base2 class 
			cout<<"constructor of derived class"<<endl;
		}
		void show(); //function show ,return type void . no object parameters
}; //end of derived class

int main(){
	derived d(4); //object of derived class
	return 0;
}
