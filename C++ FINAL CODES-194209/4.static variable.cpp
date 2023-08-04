// 3.Static variables
#include<iostream> //header
using namespace std; //satndard namespace

class shared{ // class name whose name is shared
	static int a;  //static variable shared among the objects declared in main
	int b; //private variable b
	public:
		void set(int i, int j){  //initialise static variable a and b  
			a=i;
			b=j;
		}
		void show();  //declaration of a function
}; //end of class

int shared::a;  //initialising the static variable a to 0

void shared::show(){    //definin te function outside te class  
	cout<<"The static variable a is:"<<a<<endl;  //prints static variable value
	cout<<"The non static variable b is:"<<b<<endl; //prints te non static variable value
}

int main(){ // main fun
 	shared x,y;  //objects x,y of class shared
	x.set(1,2); //passin 1,2 as parameters 
	x.show();  //printin te values  =1,2
	y.set(3,4); //passin 3,4 as parameters
	y.show(); //printin te values  =3,4
	x.show();    //the outcome will be 3,2 
	return 0;
}
