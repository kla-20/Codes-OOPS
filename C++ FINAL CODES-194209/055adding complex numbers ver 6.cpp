//private add 2 complex numbers
#include<iostream>
using namespace std;

class complex{
	int real,imag; //private data
	public:
		complex get();  //Mf , no parameters ,return type complex
		complex sum(complex c1,complex c2){ //sum return type complex ,parameters complex c1, complex c2
			complex c3; //obj c3  complex
			c3.real=c1.real+c2.real; //sum of real
			c3.imag=c1.imag+c2.imag;//sum of imag
			return c3; //return complex obj c3
		}
		void print(complex c3); // print fun void return type , parameters complex c3
}; //end of complex

complex complex::get(){  //defining fun outside class 
	complex c1,c2,add; //3 objs are declared
	cout<<"Enter both the complex numbers"<<endl;
	cin>>c1.real>>c1.imag; //input c1
	cin>>c2.real>>c2.imag;//input c2
	add=sum(c1,c2); //sum c1,c2 store in add 
	return add; //return add
}

void complex::print(complex c3){ //print result
	cout<<"The sum is:"<<c3.real<<"+"<<c3.imag<<"i"<<endl;
}

int main(){
	complex c3; //obj c3
	c3=c3.get(); //get sum
	c3.print(c3); //print sum
}

