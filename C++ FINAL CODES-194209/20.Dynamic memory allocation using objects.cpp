//20.Dynamic memory allocation for objects

#include<iostream> //header
using namespace std; //standard namespace

class student{  //student class
	int age;  //private MV
	public:
		void set_age(){    // Public mF  to set age
			age=12;
		}
		void get_age(){  //prints age
			cout<<"age="<<age<<endl;
		}
};

int main(){ //dynamic allocation syntax    --   class   *ptr =new class(); 
	student *ptr= new student(); //allocates address of a memory to pointer ptr (*ptr).fun can access functions of class 
	ptr->set_age();  // calls set_age
	ptr->get_age();//calls get_age
	delete ptr ; //after use of ptr de-allocate
	return 0;
}
