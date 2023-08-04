// multiplying 2 complex numbers using private member variables

#include<iostream> //header
using namespace std; //standard namespace

class complex{  //class complex
	int real,imag; //private data
	public:
		complex mul(complex c1,complex c2){ //mul function return type complex ,input parameters complex c1,complex c2
			complex c3; //obj i.e c3 of class complex
			c3.real=c1.real*c2.real -(c1.imag*c2.imag); //add real parts
			c3.imag=(c1.real*c2.imag)+ c1.imag*c2.real; //add imag partss
			return(c3); //return result obj c3
		}
		void print(complex c3){ //print result
			cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;
		}
		complex get(){ //user enters values and return type is complex  
			complex c;
			cout<<"enter the complex number"<<endl;
			cin>>c.real>>c.imag; //enter values
			return c;
		}	
};//end of complex

int main(){
	complex c1,c2,c3; //objects of class complex
	c1=c1.get(); //input c1
	c2=c2.get();//input c2
	c3=c3.mul(c1,c2);//c3= result
	c3.print(c3); //print c3 result
	return 0;
}
