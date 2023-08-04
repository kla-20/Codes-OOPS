// 7. adding 2 complex numbers (object parameters ver 2)
#include<iostream> //header 
using namespace std; //standard namespace

class complex{
	int real;  //private real imag
	int imag;
	public:
		void set_value(){  //takes user inputs as parameters
			cin>>real;
			cin>>imag;
		}
		void display(){   //displays  complex no
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		complex sum(complex c1,complex c2){  //return type for sum is going to be object
			complex c3;  // complex obj c3
			c3.real=c1.real+c2.real; //adds the real part
			c3.imag=c1.imag+c2.imag; //add imag part
			return c3; //returns c3 
		}
};

int main(){
	complex c1,c2,c3,c4; //4 objects of class complex 
	cout<<"Enter real and imag parts for c1"<<endl;
	c1.set_value(); //set c1 
	cout<<"Enter real and imag parts for c2"<<endl;
	c2.set_value(); //set c2 
	c1.display(); //display c1
	c2.display();//c2 display
	c4=c3.sum(c1,c2);  //adding both and storin in c4   
	cout<<"The sum is:"<<endl; 
	c4.display(); //displaying the sum i.e c4 
	return 0;
}
