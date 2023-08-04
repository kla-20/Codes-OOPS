//16. destructor
//special member functions which can regain memory that has been allocated to a particular object
//only once the destructor can be used ,when the object is out of scope the destructor is called
//destructor needs to be used only once 
#include<iostream> //header
using namespace std; //standard namespace
class cons{
	int a; //private MV a
	public:
		cons(){ //default constructor
			cout<<"Enter the value:"<<endl;
			cin>>a; //user enters a value
		}
		cons(int k){ //parameterised constructor
			a=k;
		}
		~cons(){ //destructor //wen te object is out of scope destructor is called 
			cout<<"The destructor is called"<<endl; //displays message when destructor is called 
		}
		void show(){  
			cout<<"The value of a is :"<<a<<endl; //displays a value
		}
};

int main(){
	cons x; //cons x
	cons y(80); //cons y and send  80 as parameter to initialise a for cons y
	x.show(); //after this x is out of scope
	y.show(); //after this y is out of scope
	return 0;
}

