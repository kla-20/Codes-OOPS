//1. First cin ,cout
#include<iostream>  //header pre processive directive
using namespace std; //standard namespace

class first{   //class whose name is first
	int a; //private member variable 
	public:
		void set_data(){  //public member function of type void no parameters
			cout<<"Enter the value="<<endl;  //output 
			cin>>a;   //input a
		}
		void print(){  //public member function of type void
			cout<<"The value entered is="<<a<<endl; //displays the  value of a 
		}
}; //end of the class

int main(){  // main function 
	first obj; //an object of class first is being created  
	obj.set_data(); //obj used to access the member function setdata 
	obj.print(); //obj used to access the member function print  
	return 0; //it has return type int so returns 0 
}

