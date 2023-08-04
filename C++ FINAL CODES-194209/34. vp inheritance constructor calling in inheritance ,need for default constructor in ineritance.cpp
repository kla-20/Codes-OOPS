//34. vp inheritance constructor calling in inheritance ,need for default constructor in ineritance
//A system default constructor is generated if there is no user defined constructor

#include<iostream> //header
using namespace std; //standard namespace   

//Multiple inheritance

//When user defined cons with parameters is defined its responisbilty for sub class That inerits parent class to access its constructor else compiler enerates error
//base class 1
class First{  //class first
	protected:
		int val;  //protected variable
		public:
			First(int k){  //parameterised constructor  , taking int as parameter
				val=k;
			}
			void display(){ //displays protected data val
				cout<<"Value of First constructor is :"<<val<<endl;
			}
		 	~First(){ //destructor after obj is out of scope displays below statement
		 		cout<<"First class destructor is called"<<endl;
			 }
}; //end of class First
//base class 2
class Second{  //class second
	protected:
		int val; //protected variable
	public:
		Second(int k){  //parameterised constructor  , taking int as parameter
			val=k;
		}
		void display(){   //displays protected data val
			cout<<"Value of Second constructor is :"<<val<<endl;
		}
		~Second(){  //destructor after obj is out of scope displays below statement
			cout<<"Second class destructor is called"<<endl;
		}
}; //end of class Second

class Third:public First,public Second{  //Multiple inheritance Child inherits from base class 1 ,base class 2 
	protected:
		int result; //protected variable 
	public:
		Third(int v1,int v2): First(v1),Second(v2){  //calling constructors of parent classes  
			result=v1+v2; //assigning value to result
		}	
		void display(){  //displaying values of each classes variables  
			First::display();
			Second::display();
			cout<<"Third constructor value is :"<<result<<endl;
		}
		~Third(){  //destructor after obj is out of scope displays below statement
			cout<<"Third class destructor is called "<<endl;
		} 
}; //end of class Third

int main(){
	Third obj(2,3);  //constructor parameterised sending inteer values 
	obj.display(); //displaying variable values 
	cout<<endl;  
	cout<<"Destructor is called in reverse order"<<endl;
	return 0;
}


