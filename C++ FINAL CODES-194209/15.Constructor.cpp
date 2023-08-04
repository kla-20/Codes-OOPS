//15. constructor
//used for initialization, special member fun with no return type, first member fn ,has class name itself

#include<iostream> //header
using namespace std;//stadard namespace

class cons{   //cons is name of class
	int a; //private MV a
	public: 
		cons(){  //Default cons used to iniitialize the variable a   //cons name is also the name of class  without return type 
			cout<<"enter the value for a:"<<endl;
			cin>>a; //user enters a value 
		}
		cons(int k){ //parameterized constructor
			a=k;  //assinin value to a 
		}
		void show(){
			cout<<"the value of a is:"<<a<<endl;  //displays value a
		}
}; //end of class cons

int main(){
	cons x; //compiler recon and calls the default constructor
	cons y(18); //it calls parameterised constructor
	x.show(); //x calls show
	y.show(); //y calls show
	return 0;
	
}
