//counter using static variables

#include<iostream>
using namespace std;
class count{ //count class
	static int a; //static MV int a
	public:
		void calculate(); //declaration of calculate()
		void print(); //declaration of print()
}; //end of count

int count::a; //initialise count to 0
void count::calculate(){  // definition outside class 
	a=a+1;//incrementation of a value
}
void count::print(){ //print objects i.e a value
	cout<<"the no of objects is "<<a;
}

int main(){
	count l,m,n; //3 objs of class count
	l.calculate(); //count l
	m.calculate(); //count m(i.e m,l)
	n.calculate(); //count n(i.e m,l,n)
	n.print(); //print total count 
	return 0;
}
