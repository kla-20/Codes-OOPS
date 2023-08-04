//21. Dynamic memory allocation with size &dereference

#include<iostream> //header
using namespace std; //standard namespace

class student{  //student class
	int age; //private mv
	public:
		void set_age(){  //public mf
			age=19;  //assining 19 to age
		}
		void get_age(){ //prints ae
			cout<<"age="<<age<<endl;
		}
}; //end of class student

int main(){
	student obj; //creating an object of the class
	int size=sizeof(obj); //size of object
	cout<<"the size of object is:"<<size<<endl; //can also do cout<<"the size of object is:"<<sizeof(obj)<<endl instead of line 19
	student *ptr= new student(); //dynamic memory allocation
	cout<<ptr<<endl; //print ptr value  i.e address it is pointing to 
	ptr->set_age(); //set_age is accessed
	ptr->get_age();//get_age is accessed
	(*ptr).set_age(); //Dereference ptr to use . operator
	(*ptr).get_age(); //get_age is accessed 
	delete ptr;//de allocation of memory
	return 0;
}
