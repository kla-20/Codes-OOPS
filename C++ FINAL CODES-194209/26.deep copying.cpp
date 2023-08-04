//26.Deep copying 
#include<iostream> //header
using namespace std;// standard namespace

class cc{  //cc class
	int a;  //private data 
	int b;
	int *p;
	public:
		cc(){  //default constructor for obj1 for *p
			p= new int; //dynamic memory allocation for p
		}
		cc(const cc &d){  //     COPY CONSTRUCTOR    (d is the reference for the object of the class cc i.e obj1)    
			a=d.a;
			b=d.b;
			p=new int; //p points a new memory location for not wanting to share the same memory loaction as in shallow copying
			*p=*(d.p);
		}
		void set_data(int x ,int y,int z){ //set data fun it initialises variables 
			a=x;
			b=y;
			*p=z;
		}
		void print(){  //prints details of private data
			cout<<"the value of a is:"<<a<<endl;
			cout<<"the value of b is:"<<b<<endl;
			cout<<"the value of *p is:"<<*p<<endl;
			cout<<"Address of *p is:"<<p<<endl;
			cout<<"Address of a is :" <<&a<<endl;
			cout<<"Address of b is :" <<&b<<endl;
		}
		
}; //end of cc

int main(){
	cc obj1;  //created obj1
	obj1.set_data(4,5,7); //set obj1 data
	obj1.print(); //print details of obj1
	cout<<"copy constructor or deep copying"<<endl;
	cc obj2=obj1;  //deep copying
	obj2.print();//print details of obj2 data
	cout<<"a and b and *p for each objects obj1 and obj2 have different addresses unlike *p having same address in shallow copying"<<endl;
	return 0;
}
