//24.copy constructor 2

#include<iostream> //header
using namespace std; //standard namespace

class cc{  // cc class
	int x,y; //private MV
	public:
		cc(int x1,int y1){  //normal constructor parameterised
			x=x1; 
			y=y1;
		}
		
		cc(const cc &sam){  //sam is a reference for object of class cc i.e obj1 (syntax: class(const class &sam) {} 
			x=sam.x;//new x for obj2=sam.x i.e of obj1 copying
			y=sam.y;//new y for obj2=sam.y i.e of obj1 copying
		}
		~cc(){ //destructor is called
			cout<<"destructor is called"<<endl;
		}
		void display(){  //displays private data x,y
			cout<<x<<" "<<y<<endl;
		}
}; //end of class cc

int main(){
	cc obj1(23,24);  //x=23,y=24
	cout<<&obj1<<endl; //address for obj1
	cout<<"normal constructor"<<endl; 
	cc obj2=obj1; //copy constructor
	cout<<&obj2<<endl; //address of obj2
	cout<<"copy constructor"<<endl;
	obj2.display(); //23,24 i.e copied
	return 0;
}
