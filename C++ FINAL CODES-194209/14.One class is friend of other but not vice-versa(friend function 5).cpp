//14.friend function 5
//One of the classes is friend but the vice versa is not possible
//PURPOSE: a function in a class wic is friend of one class and vice versa is not tere
#include<iostream> //header
using namespace std; //standard namesapce

class sb{ //class sb 
	int balance; // private data
	public: 
		void set_data(int k){ // member fun type void set data(parameter int) 
			balance=k;
		}
		int fun(sb s); //declaring a function which is going to be the friend function for class rd
		friend class rd; //Now sb is friend of rd but rd is not friend of sb, it can use the above function to access sb's private data
};

class rd{ //rd can access  member funs and member variable of sb 
	int bal; //private data 
	public:
		void set(){  //set data for rds balance 
			bal=9000;
		}
		int fun(sb s){  //defining the function in line 13 scope resolution oprtr is used bcoz its actually a fn of class sb
		//i ot obj s now i can use tis to alter balance like s.set_data(2000) 
					return(s.balance);	
		//Can also alter sbs private data
		/*  s.set_data(10000)
		*/
		}
};

int main(){
	sb s; //obj s
	rd r; //obj r
	s.set_data(14900); //set data for sb  
	r.set(); //set data for r 
	cout<<"The balance in sb account is:"<<r.fun(s)<<endl; //the fun(sb s) is defined in r so we call as r.fun(sb s)
	return 0;
}
