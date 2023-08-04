//11.Friend function version 2
//A common friend function in 2 classes to access their data 
//To bridge the gap between them

//PURPOSE: A common same friend function in 2 different classes and accessin teir private data   

#include<iostream> //header
using namespace std; //standard namespace
class rd;  //Advanced declaration like witout tis if we write in class sd friend int (class sd ,[class r]) [] is not understood

class saving{ // class saving
	int acc_no ,balance; //private data
	public:
		void set_data(){  //set data member function of type void no parameters assinin te private member variables
			acc_no=900; 
			balance=10000;
		}
		friend int total(saving s,rd r);  //friend function declared in this class , the use of advanced declaration is for the statement where 1 parameter is rd r
}; //end of class sd

class rd{ //class rd
	int acc_no,balance;  //private data
	public:
		void set_data(){  //set data to assin te private member variables 
			acc_no=122;
			balance=15000;
		}
		friend int total(saving s,rd r); //declaration of friend function,  same one tat is declared in te sd class   
}; //end of class rd

int total(saving s,rd r){ //friend function tat was defined in bot te classes definition no need of writin friend or scope resolution operator just return type
	return(s.balance+r.balance);  //returs te total balance in rd +savin
}

int main(){
	saving s;  //obj of savin s
	rd r; //obj of rd
	s.set_data(); //set values for private data in s
	r.set_data(); //set values of private data in r
	cout<<"The balance in both the account is :"<<total(s,r)<<endl; // displays balance in bot te accounts 
	return 0;
}
