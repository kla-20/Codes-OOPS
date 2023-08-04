//adding 2 complex numbers with real and imaginary as public member variables

#include<iostream> //header
using namespace std; //standard namespace
class complex{  //class name is complex
	public:
		int real,imag; 
		complex get(complex c); //take complex c set values to it return back 
		complex sum(complex c1,complex c2); //take complex c1, complex c2 , sum and return result complex 
		void display(complex c3); //display sum
};

inline complex complex::get(complex c){  //defining get outside class 
	cout<<"Enter parts of complex number"<<endl;
	cin>>c.real>>c.imag; //user inputs 
	return c;	//return complex c
}

inline complex complex::sum(complex c1,complex c2){ //parameterised function
	complex c3; //complex c3
	c3.real=c1.real+c2.real; //sum real
	c3.imag=c1.imag+c2.imag;//sum imag
	return c3; //return summed complex 
}

inline void complex::display(complex c3){  //inline fn display outside class 

	cout<<"The sum is:"<<c3.real<<"+"<<c3.imag<<"i"<<endl; //prints sum of 2 complex nos
}
int main(){
	complex c1, c2, c3; //3 objects of class complex
	c1=c1.get(c1); //set c1 
	c2=c2.get(c2);//set c2
	c3=c3.sum(c1,c2); //set c3 i.e c1+c2
	c3.display(c3); //display sum i.e c3
	return 0;
}

