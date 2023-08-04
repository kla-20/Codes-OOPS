//2.inline functions and defining functions outside the class
#include<iostream> //pre processive directive
using namespace std; //standard namespace
 
class first{  //class of name first
	int a; //private variable
	public:  
		void set_data();   // Declaring the functions in the  class and defining outside 
		void print(); //declarin fun of type void 
}; //end of class
//Defining the functions outside the class
inline void first::set_data(){     //inline function syntax to define fun outside
	cout<<"Enter the value:"<<endl;  //
	cin>>a; //takin te input
}
void first::print(){  //defiing te print fun outside 
	cout<<"The value entered is:"<<a<<endl;  //displaying te private data value  
}

int main(){   //main function
	first obj; //creatin an object of class first  
	obj.set_data(); //accessin te set data fun of class usin obj
	obj.print(); //accessin te print fun usin obj
	return 0; //return type int for main
}
