//Operations with complex numbers

#include<iostream>//header
using namespace std; //standard namespace

class complex{
	float real,imag;  //private data 
	public:
		void set_value(){   //sets priavate data
			cin>>real>>imag;   // initialising the objects real and imaginary parts
		}
		void display(complex d,int check){  //displays result based on operation
			if(check==1)
				cout<<"The sum is:"<<d.real<<"+"<<d.imag<<"i"<<endl;
			else if(check==2)
				cout<<"The product is:"<<d.real<<"+"<<d.imag<<"i"<<endl;
			else if(check==3)
				cout<<"The difference is:"<<d.real<<"+"<<d.imag<<"i"<<endl;
			else
				cout<<"The division of the 2 complex numbers is:"<<d.real<<"+"<<d.imag<<"i"<<endl;
			
		}
		complex sum(complex c1){  //sum of complex numbers using this pointer 
			complex c2;
			c2.real=this->real+c1.real; //this refers to c2 add c1,c2 store in c2 real part
			c2.imag=this->imag+c1.imag;//this refers to c2 add c1,c2 store in c2 imag part
			return c2;
		}
		complex mul(complex c1,complex c2){ // multiply 2 complex nos
			complex c3; //obj of class complex 
			c3.real=c1.real*c2.real -(c1.imag*c2.imag) ; // real part
			c3.imag=c1.real*c2.imag +(c1.imag*c2.real); //ima part
			return c3; //return c3
		}
		complex sub(complex c1){  // sub using pointer
			complex c2;
			c2.real=c1.real-real; //real==this->real
			c2.imag=c1.imag-imag;//imag==imag->imag
			return c2; //return result
		} 
		complex div(complex c1){ // division using this pointer
			complex c2;
			c2.real=((c1.real*real)+(c1.imag*imag))/(real*real +imag*imag) ; //real part for result complex no
			c2.imag=((c1.imag*real)-(c1.real*imag))/(real*real +imag*imag) ;//imag part for result complex no
			return c2; //return c2
		}
};

int main(){
	int i=0;
	complex c1,c2,add,mul,sub,div;
	cout<<"Enter the 1 complex number"<<endl;
	c1.set_value(); //set c1
	cout<<"Enter the 2 complex number"<<endl;
	c2.set_value(); //set c2
	cout<<"Enter the operation-1)add 2)mul 3)sub 4)div " << endl;
	cin>>i; //scan operation user wants
	if(i==1){  // add fun
		add=c2.sum(c1);
		add.display(add,i);
	}
	else if(i==2){  //mul fun
		mul=mul.mul(c1,c2);
		mul.display(mul,i);
	}
	else if(i==3){ //sub fun
		sub=c2.sub(c1);
		sub.display(sub,i);
	}
	else{ //div fun
		div=c2.div(c1);
		div.display(div,i);
	}
	return 0;
	
}
