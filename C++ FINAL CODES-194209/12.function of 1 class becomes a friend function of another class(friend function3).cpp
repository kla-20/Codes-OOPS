//12. friend function 3
//Using function of 1 class as a friend function of other class and accessing its private data
#include<iostream>
using namespace std;
class rd; //advanced declaration
class saving{
	int balance;  // private variables 
	public:
		void set_data(int k){  //set data member fun return type void, parameter int
			balance =k;
		}
		//down one is a normmal one in savin tat is used as a friend fun in oter class 
		int friend_fun(rd r);  //declaring the function which can act as a friend function in class rd
		void show(){ //member fun of savin
			cout<<"The saving account balance:"<<balance<<endl;  //displays balance of savin
		}
}; //end of savin

class rd{
	int bal; //private bal member variable
	public:
		void set_data(int m){  //public member function of return type void , parameter int
			bal=m; //assin private data bal 
		}
		//in down one scope resolution operator is used since it belons to oter class   
		friend int saving::friend_fun(rd r);  //Now this the friend function of rd but actually normal member function of saving now since its a friend func of rd can access rd private data 
		void show(){  //member fun of class rd
			cout<<"The balance in rd account is:"<<bal<<endl; //displays bal of rd
		}
}; // end of rd

int saving::friend_fun(rd r){  //Now the function of saving acting as a friend function of rd is accessing the balance of rd (i.e private data) 
	return(r.bal); // returns bal of rd 
}

int main(){
	rd r;  // obj r of rd 
	saving s; //obj s of savin
	s.set_data(5000); //set data for s
	r.set_data(4000); // set data for r 
	s.show();  // display s.balance 
	cout<<"The balance in rd account is:"<<s.friend_fun(r)<<endl; //here s.friend_fun(r) is used bcoz the friend_fun is actually a function of saving so its called like obj.fun
	return 0; //returns 0
}
