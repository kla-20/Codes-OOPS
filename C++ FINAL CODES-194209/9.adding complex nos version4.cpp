//9.adding 2 complex nos (object parameter ver 4)
#include<iostream> //header
using namespace std; //standard namespace
class complex{  
	int real; //private real and int
	int imag;
	public:
		void set_value(){ //public  member fn takes user inputs 
			cin>>real;
			cin>>imag;
		}
		void display(){  //displays complex no
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		complex sum(complex c1){  //function of return type complex takes only 1 input parameter of type complex (i.e class)  
			complex c3;  //obj c3 of class complex
			c3.real=real+c1.real;      //real is this->real c2.real
			c3.imag=this->imag+c1.imag;//this -> refers to c2 itself  in line 30 where c2=c2.sum(c1); 
			return c3; //returns c3
		}
}; //end of class
int main(){
	complex c1,c2;  //only 2 objects are used bcoz to reduce the space which is taken by c1,c2,c3,c4 in previous prgms
	cout<<"Enter the values for c1"<<endl;
	c1.set_value(); //sets c1
	cout<<"Enter the values for c2"<<endl;
	c2.set_value(); //sets c2
	c1.display(); //displays c1
	c2.display(); //displays c2
	c2=c2.sum(c1);  //passing object c1 only as parameter and c2 is this and result stored in c2
	cout<<"the sum of 2 complex nos is:"<<endl; 
	c2.display(); //display sum
	return 0;
}
