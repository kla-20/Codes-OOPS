//19. Object count using static constructors
//how many objects are created and destroyed
#include<iostream> //header
using namespace std; //standard namespace
class counter{  //class name is counter
	public:
		static int count;  //static variable int count declared in public section
		counter(){ //defining the constructor
			count++; //when obj is declared then constructor is called and it increments te value of count  
		}
		~counter(){  //defining the destructor
			count--;//when obj is out of scope destructor is called and decrements te count  
		}
}; //end of class counter
int counter::count; //initialising the static variable to 0
void fun(){ //global function
	counter func_obj;  //functional object
	cout<<"The objects in existence is "<<counter::count<<endl; //it gives 3 
}

int main(){
	counter obj1;  
	cout<<"The objects in existence is "<<counter::count<<endl; //1
	counter obj2;
	cout<<"The objects in existence is "<<counter::count<<endl; //2
	fun(); //it ives 3
	cout<<"The objects in existence is "<<counter::count<<endl; //2 since functional objects are out of scope once tey come out of it so its destroyed
	return 0;
}

