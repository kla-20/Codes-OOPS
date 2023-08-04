//complex  number addition using dynamic memory allocation

#include<iostream>
using namespace std;

class complex{ //class complex
	int real ,imag; //private data
	public:
		void get_data(){  //input data from user 
			cout<<"Enter the  real and imag values"<<endl;
			cin>>real;
			cin>>imag;
		}
		complex add(complex c1,complex c2){  //add complex nos (function add ,return type complex ,parameters complex c1,complex c2) 
			complex c3; //complex c3 
			c3.real=c1.real+c2.real; //add real parts
			c3.imag=c1.imag+c2.imag; //add imag parts
			return c3; //return c3
		}
		void print(complex c){ //print sum
			cout<<c.real<<"+"<<c.imag<<"i"<<endl;
		}
}; //end complex


int main(){
	complex *c1 =new complex(); //dynamic memory allocation for c1
	complex *c2 =new complex(); //dynamic memory allocation for c2
	complex c3; //obj c3 of class complex
	(*c1).get_data(); //user input data for c1
	c2->get_data(); //user input data for c2
	c3=c1->add(*c1,*c2); //c1 is pointer , add returns complex ,imput parameters must be contents of address of c1,c2 i.e *c1,*c2 
	c2->print(c3); //.print c3
	delete c1; //deallocate c1
	delete c2;//deallocate c2
	return 0; 
	
}
