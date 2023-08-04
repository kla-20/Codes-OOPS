//33. vp., diff b/w private and protected  ,accessin parents data through member functions

#include<iostream> //header
using namespace std; //standard namespace

class First{
	private:       // declarin variable in private section of first
		int prival;
	protected:   //declarin variable in protected section of first
		int proval;
	public:  //declarin variable in public section of first 
		int pubval;  	
		void set(int i,int j,int k){ //set data fun to assign values to variables
			prival=i;
			proval=j;
			pubval=k;
		}
		void display(){ //display fun to print The values of   
			cout<<"prival value is:"<<prival<<endl;
			cout<<"proval value is:"<<proval<<endl;
			cout<<"pubval value is:"<<pubval<<endl;
		}
				
}; //end of class first

class Second:public First{  //Second class inherits data From parent First and is stored as public(i.e access specifier)
	int result; //private data for sub class
	public:
		void set(int a,int b,int c){  //set data for parent class
			First::set(a,b,c);   //through sub class  , from user
		}
		void set(){  //values also can be given in function
			First::set(1,2,3);
		}
		
		void display(){  // display First class details 
			First::display();
		}
};  //end of Class Second

int main(){
	
	Second obj; //Creating obj of Second class
	obj.set(); //set data for parent class 
	obj.display();  //display them
	obj.set(2,3,4); //Through main give values even for private variable prival 
	cout<<endl; 
	obj.display(); //display values of First
	return 0;
	
}
