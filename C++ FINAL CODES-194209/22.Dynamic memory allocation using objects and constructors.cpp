//22.Dynamic allocation using constructors and objects
#include<iostream> //header
using namespace std; //standard namespace

class student{  //student class
	int age; //private data
	public:
		student() : age(14) {} //another form of defining a constructor
		void get_data(){ //Mf prints age
			cout<<"age="<<age<<endl;
		}
};

int main(){
	student *ptr=new student(); //in line 8 constructor is called and age is initialised to that value instead of using set_value
	ptr->get_data(); //prints age
	delete ptr; //de allocating memory
	return 0;
}
