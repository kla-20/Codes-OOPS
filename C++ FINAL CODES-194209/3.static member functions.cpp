// 5.Static member functions
//Tey can access only static variables and global variables  
#include<iostream> //pre processive directive
using namespace std; //usin standard namespace
class teststa{   //class name is teststa
	static int a;  //static member variable 
	public:
		static void set(int k){  //static member function used to access the static member variable a
			a=k;  //assining value the static variable usin static function
		}
		void show(){  //member function in public to display te static variable value
			cout<<"The value of the static variable is:"<<a<<endl; 
		}
}; //end of class teststa
int teststa::a;  //a=0  //initialisin te static variable to 0 

int main(){   //main function
	teststa::set(4); //to access a static member function we need to create an object , because tey dont belon to a class 
	teststa obj; //obj of class teststa
	obj.show();//. accessin the show fun usin obj
	return 0; //return 0
}
