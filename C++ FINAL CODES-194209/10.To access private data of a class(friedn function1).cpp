//10. Friend function ver1
//to access the private data using friend function
//PURPOSE:Friend fun declared in class to access private variable data a
#include<iostream> //header
using namespace std; //standard namespace

class op{ 
	int a; //private variable
	public:
		friend void print(op obj); //friend function declared of type void takes paramters op obj
		void set_value(int k){ //set value return type void 
			a=k; //initialises a
		}
}; //end of class op
void print(op obj){  //friend functions dont belong to a particular class  no scope resolution operator req like void op::fun(op obj)
	cout<<"The private varible value is :"<<obj.a<<endl; //displays a
}

int main(){
	op obj; //object obj of class op  
	obj.set_value(9); // sets value of a  sendin parameter 9  
	print(obj);  //Here we need not use something like obj.print  since friend function doesnt belong to  a class , can also write statement here cout<<print(obj)<<endl 
	return 0;
}
