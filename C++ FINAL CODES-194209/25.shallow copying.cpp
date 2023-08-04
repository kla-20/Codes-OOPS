//25.Shallow copying
#include<iostream> //header
using namespace std; //standard namespace

class demo{  //class name is demo
	int a;
	int b;
	int *p;  //an integer pointer variable
	public:
		demo(){  //constructor demo
			p=new int; //p is allocated to a memory of size int at calling of constructor and declaration of object
		}
		void set_data(int x,int y,int z){  // function to initialise private data  
			a=x;
			b=y;
			*p=z;
		}
		
		void print(){  //function that prints below details 
			cout<<"the value of a is:"<<a<<endl;
			cout<<"the value of b is:"<<b<<endl;
			cout<<"the value of *p is:"<<*p<<endl;
			cout<<"Address of *p is:"<<p<<endl;
			cout<<"Address of a is :" <<&a<<endl;
			cout<<"Address of b is :" <<&b<<endl;
		}
}; //end of demo


int main(){
	demo obj1;  //obj is created
	obj1.set_data(4,5,7); //fun is called and private data is assgined
	obj1.print();//prints details ,address ,value
	cout<<"parameterised constructor shallow copying"<<endl;  //sallow copying
	demo obj2=obj1; //bit wise copy
	obj2.print(); //when it is done te memory is common for *p value i.e p value when obj2.print and obj1.print is same since bit wise copying 
	cout<<"The objects share same memory location for p but a and b for each objects obj1 and obj2 have different addresses"<<endl;
	return 0;
}
