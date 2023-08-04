//32 .VP ,, inheritance  , private ,public, protected in Single inheritance

#include<iostream> //header
using namespace std; //standard namespace

class First{
	private:       // declarin variable in private section of first
		int prival;
	protected:   //declarin variable in protected section of first
		int proval;
	public:  //declarin variable in public section of first 
		int pubval;	
}; //end of class first

class Second:public First{  // Second class inherits class First Properties in Public ,i.e protected ,public in public section of Second class
	int result;  //private data result
	public:
		void set(){  //set to initialise data
			pubval=100;
			proval=300;
			result=pubval+proval;
		}
		void display(){  //printin result
			cout<<"The result value is: "<<result<<endl;
		}
}; //end of cild class second

int main(){
	Second obj;  //obj of second class
	obj.set(); //call set fun of second class
	obj.display(); //display func
	cout<<obj.pubval<<" It is pubval value"<<endl; //shows public variable pubval ,can be accessed in main
	//cout<<"obj.proval"<<endl;  //tis cant be accessed in main
	return 0;
}
