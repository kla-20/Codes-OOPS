//18. order in which constructors and destructors are called
#include<iostream> //header
using namespace std; //standard namespace
class myclass{
	int a; //priivate data MV
	public:
		myclass(int k); //declaration of a constructor		
		~myclass(); //declaration of a destructor
}glob_obj1(1); //1st global object calls cons parameterised

myclass glob_obj2(2); //2nd global object calls parameterised

myclass::myclass(int k){ //defining a constructor outside class
	cout<<"Intializing "<<k<<endl; //displays wen constructor is called
	a=k; //initialises a
}
myclass::~myclass(){ //defining a destructor outside te class
	cout<<"Destructing "<<a<<endl; //calls wen object is out of scope
}

void fun(){  //functional constructors //global function
	myclass func_obj1(3);  //functional obj1
	cout<<"this is a function"<<endl;
	myclass fun_obj2(4); //functional obj 2
	cout<<"this is a function"<<endl;
}


int main(){
	fun(); //global function is called
	myclass local_obj1(5); //local constructor 1
	myclass local_obj2(6);//local constructor 2
	return 0;
}
//Ans) 1st destruction happens to functional objects when they are out of function they are out of scope and destructed in reverse order
//2) then local objects are destroyed in reverse order
//3)global objects at last in rev order
//sequence   4,3,6,5,2,1
  

