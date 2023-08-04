//13. Friend function 4
//Friend class for 2 classes to bridge the gap
//PURPOSE:usin a common friend class in 2 oter classed and bridge gap b/w tem 

#include<iostream> //header
using namespace std; //standard namespace
class sb{ //class sb
	int acc_no,balance; //private member variables of sb 
	public:
		void set_data(){ //set data to set private data
			acc_no=890;
			balance=14000;
		}
		friend class total; //it can take objects of the classes with which it is friend with and through them can access the private data
};

class rd{
	int acc_no,bal; //private data 
	public:
		void set_data(){//set data to set private data
			acc_no=123;
			bal=8000;
		}
		friend class total;//it can take objects of the classes with which it is friend with and through them can access the private data
};

class total{ // friend class for bot sb ,rd 
	public:
		int sum(sb s, rd r){  //fun of total takes input parameters as bot classes and  and trou tem access teir private data and adddin them
		return(s.balance+r.bal);// return the sum
		}
}; //end of class total

int main(){
	sb s; //obj of sb i.e s
	rd r; //obj of rd i.e r
	total t;  // obj of friend class total i.e t
	s.set_data(); //set s data
	r.set_data();//set r data
	cout<<"The Total balance in sb account and rd account is:"<<t.sum(s,r)<<endl; //despite its a friend class its a class so to call a function we sould do obj.fun i.e t.sum(s,r)
	return 0; //return 0;
}
