//58. adding complex numbers using  parameterised constructors 
#include<iostream>//header
using namespace std; //standard namespace

class complex{ //complex class
	int real ,imag; //private data real and imag of type int  
	public:
		complex(int i, int j){  //cons used for initialising the real and imaginary parts through parameters
			real=i;
			imag=j;
		}
		
		void display(complex c1,complex c2){ //display sum of complex nos
			cout<<"The sum of the 2 complex numbers is: "  <<c1.real+c2.real <<"+" <<c1.imag+c2.imag<<"i"<<endl;
		}
}; //end of complex

int main(){
	complex c1(1,2); //cons 1 parameterised
	complex c2(3,4); //cons 2 parameterised
	c1.display(c1,c2); //display sum
	return 0;
	
}
