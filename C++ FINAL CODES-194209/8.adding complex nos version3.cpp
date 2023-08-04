//8. adding 2 complex nos (object parameters ver 3)
#include<iostream> //header
using namespace std; //standard namespace

class complex{
	int real; //private real and imag 
	int imag;
	public:
		void set_value(int i, int j){  //Here instead of asking the user to input we send the values from main as parameters
			real=i;
			imag=j;
		}
		
		void display(){  //displays  complex no
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		complex sum(complex c1,complex c2){  //function sum of return type complex taking input parameters as complex ,complex  
			complex c3; //object c3 of complex
			c3.real=c1.real+c2.real;  //addin real part
			c3.imag=c1.imag+c2.imag; //addin ima part 
			return c3; //returns c3
		}
}; //end of class complex

int main(){
	complex c1,c2,c3,c4;  //4 objects of class complex
 	c1.set_value(1,2); //sets c1 passin 1,2
	c2.set_value(2,3); //sets c2 passes 2,3
	c1.display(); //displays 1+2i
	c2.display();displays 2+3i
	cout<<"the sum of 2 complex nos is :"<<endl;
	c4=c3.sum(c1,c2); //calling sum and stores result in c4
	c4.display(); //displays sum 3+5i 
	return 0;
}
