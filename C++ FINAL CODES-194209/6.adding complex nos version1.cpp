//6. Adding 2 complex numbers (object parameters ver 1)

#include<iostream> //header
using namespace std; //standard namespace

class complex{ 
	int real; //private real
	int imag;//private ima 
	public:
		void set_value(){  //it takes user inputs as parameters
			cin>>real;
			cin>>imag;
		}
		void display(){  //displays te complex number 
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		//passin classes as parameters 
		void sum(complex c1,complex c2){   //sum(complex &c1 ,complex &c2)  can also be used and return type is void
			real=c1.real+c2.real; //addin real part 
			imag=c1.imag+c2.imag; //addin ima part
		}
}; //end of class

int main(){ 
	complex c1,c2,c3; //3 objects
	cout<<"Enter the real and imag parts for c1"<<endl;
	c1.set_value(); // settin c1
	cout<<"Enter the real and imag parts for c2"<<endl;
	c2.set_value();//settin c2
	cout<<"The 2 complex numbers are:"<<endl;
	c1.display(); //display complex no c1
	c2.display();//display complex no c2
	c3.sum(c1,c2);  //add both of them 
	cout<<"The sum is:"<<endl;   
	c3.display(); //prints the sum 
	return 0;
}
