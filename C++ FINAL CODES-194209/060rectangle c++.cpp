#include<iostream> //header
using namespace std; //standard namespace
class rectangle{ //rectanle class
	private: float l , b; //private data
	public:
		void get(){  //get MF return type void , no object parameters  ,definition
			cout<<"enter length and breadth : "; //ask to enter values
			cin>>l>>b; //user inputs values
		}
		void print(){ //print properties
			cout<<"the area of the rectangle is \n"<<(l*b);  // print area
			cout<<"the perimeter of the rectangle is \n"<<(2*(l+b)); //print perimeter
		}
}; //end of class rectangle

int main()
{
	rectangle rec; //obj of rectangle class i.e rec 
	rec.get(); //input details of rec
	rec.print(); //print properties of rectanle
	return 0;
}
