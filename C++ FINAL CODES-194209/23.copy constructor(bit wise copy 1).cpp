//23 .Copy constructors (ver1) 
//when a object is declared a constructor is called by default to copy the class properties(i.e public ,private data to anoter obj of same class ) to show they are copied
//we use constructor
#include<iostream>//header
using namespace std; //standard namespace
class A{
	public:
		A(){ //default construcor
			cout<<"constructor"<<endl;  //prints wen obj is created
		}
		~A(){
			cout<<"destructor"<<endl;  //destructor is called wen obj is destroyed
		}
		void show(){  //prints i am copied 
			cout<<"i am copied"<<endl;
		}
};//end of A

int main(){
	A obj1; //default constructor is called
	cout<<&obj1<<endl;  //address of the object1
	A obj2=obj1;   //bit wise copying ,a2 is initialised by a1 , they share same memory
	cout<<&obj2<<endl; //address of obj2
	obj2.show(); //obj2 .show  means it acquires all that of obj1
	return 0;
	
}
