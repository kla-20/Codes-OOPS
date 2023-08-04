//51.NEW way of initialising variables from constructors set value of variables
#include<iostream> //header
using namespace std; //standard namespace
class A{ //class name A
	protected: 
		int x,y; //protected data
		public:
			A(int l ,int m):x(l),y(m){}  //initialisation of protected variables from parameterised constructor 
}; //end of A 

class B:public A{  //Single inheritance access specifier public
	int a,b;//private data
	public:
		B(int x,int y,int z):a(x),A(y,z),b(z){} //initialisation of protected variables of A,private variables of B from parameterised constructor 
	void show(){ //display values of variable of A,B
		cout<<"The values are-"<<endl;
		cout<<"x is "<<A::x<<endl;
		cout<<"y is "<<A::y<<endl;
		cout<<"a is "<<B::a<<endl;
		cout<<"b is "<<B::b<<endl;
	}	
}; //end of B

int main(){
	B obj(2,3,4); //parameterised constructor is invoked at creation of object of class
	return 0;
} 
