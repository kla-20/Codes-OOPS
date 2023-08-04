#include<iostream>//header
using namespace std;//standard namespace
//adding2 complex numbers using default constuctors  and parametrised constructors

class complex{ //class complex
	int real; //private data
	int imag;
	public:
		
		complex(){   //default cons
			cout<<"Enter the real and imag parts of the complex number"<<endl;
			cin>>real; //take real and imag parts from user
			cin>>imag;
		}
		complex(int i,int j){ //parameterised constructor
			real=i;
			imag=j;
		}
	
		
		void display(complex c1,complex c2){ //MFn  display parameters complex c1,complex c2 return type void
			cout<<"The sum is "<<c1.real+c2.real<< "+" <<c1.imag+c2.imag<<"i"<<endl; //display result
		}
		~complex(){ // destructor after object is out of scope
			cout<<"destructor is called"<<endl;
		}
}; //end of complex

int main(){
	complex c1;  //decalring c1 and user enters data wen constructor is called 
	//cout<<"Enter the details for c2"<<endl;
	complex c2(2,3); // parameterised constructor is called for c2 
	c2.display(c1,c2); //display sum
	return 0;
	
}


