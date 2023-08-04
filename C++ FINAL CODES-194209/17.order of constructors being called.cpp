//17. Global function & local constructor & functional constructors
//What is the order of constructors being called
//1 .global, 2.functional ,3. local
#include<iostream> //header
using namespace std;//standard namespace

class myclass{ //class name is myclass
	int a; //private MV a
	public:
		myclass(int k); //constructor declared inside the class parameterised 
		void print(){ //prints a value
			cout<<"The value of a is  "<<a<<endl;
		}
}glob_obj1(1); //global obj 

myclass glob_obj2(2);   //global obj 2

myclass::myclass(int k){  //definition of the constructor parameterised
	cout<<"Initialising "<<k<<endl; //displays wen constructor is called
	a=k; //assinin value to a
}

void fun(){  //global function
	myclass fun_obj1(3);  //functional cons 1
	cout<<"this is a function"<<endl; //this fun is called 
	myclass fun_obj2(4); //functional cons 2
	cout<<"this is a function"<<endl;
}


int main(){
	fun(); //global function is called  wen a global fun is defined
	myclass local_obj1(5); //local constructor 1
	//local_obj1.print();
	myclass local_obj2(6); //local constructor 2
	//local_obj1.print();
	return 0;
}


