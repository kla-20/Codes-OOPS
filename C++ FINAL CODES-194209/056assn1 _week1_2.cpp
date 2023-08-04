#include<iostream>//header
//#include<stdio.h>
using namespace std; //standard namespace
class student{ //student class
	int reg_no; //private data MV
	string str;
	public:
		void get(); //declaration off MFns in class
		void print();
}; //end of class

inline void student::get(){
	cout<<"Enter name and reg_no:"<<endl;
	getline(cin,str); //getline fun for cin string space can be used in string
	cin>>reg_no;// input re_no 
	
}
inline void student::print(){ //print details
	cout<<"the name is:"<<str<<endl;
	cout<<"the regno is:"<<reg_no<<endl;
}

int main(){
	student a,b ; //objs of student class 
	a.get(); //obtain a details
	a.print(); //print a details
	b.get();//obtain b details
	b.print();	//print b details
	return 0;
}



