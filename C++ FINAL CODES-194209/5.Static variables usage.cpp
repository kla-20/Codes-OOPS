//4. Static variable usage and global variable
#include<iostream> //header 
using namespace std; //standard namespace
int t=10; //Global variable
class teststa{  
	public:
		static int a; //static variable a 
		static void set(){  //This is a static member function which can only access static variables and global variables
			a=9; //initialisin te static variable to 9
			cout<<"The static variable value is:"<<a<<endl;  //prints a value 9 
			cout<<"The global variable value is:"<<t<<endl; //prints t value 10
		}
};

int teststa::a=7;  //intializing a=7
int main(){ 
	cout<<"The value of a initially is:"<<teststa::a<<endl;  //static variables are also called as class variables =7
	teststa::set(); //can be accessed witout an object 
	cout<<teststa::a<<endl;  //prints a value after settin =9
	return 0;  
}


