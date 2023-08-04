// 35.vp virtual base class 
//in case of a hierarcical inheritance if a is parent for b,c and b,c are parents for d i.e multiple inheritance 
//D acquires a value twice from B and C .There will be a duplicacy of data , To avoid this redundant scenario
//When we call A display fun of A like A::display() from D ,compiler gets confused from B or C i should call
//So we use A as virtual class it acts as parent to d and inherited only once

#include<iostream> //header
using namespace std; //standard namespace 

class Superclass{ //Super class parent of First parent, Second parent inheritance used is hierarchical  
	protected: //protected variable of Superclass
		int val;
	public:
		void setSuper(int k){  //Set value for val
			val=k;
		}
		void display(){  //display value
			cout<<"Super class value is :"<<val<<endl;
		}	
};      
//hierarchical inheritance
class First_Parent:virtual public Superclass{  //virtual is used to say not to copy data 2wice , its virtual parent for First_parent
	protected:
		int val; //protected variable
		public:
			void set_First_Parent(int k){   //Set value for val
				val=k;
			}
			void display(){   //display value
				cout<<"First Parent class value is: "<<val<<endl;
			}
};  //end of class First_Parent , 


class Second_Parent:virtual public Superclass{  //virtual is used to say not to copy data 2wice , its virtual parent for First_parent
	private:
	protected:
		int val; //protected variable
		int spcl;
		public:
			void set_Second_Parent(int k){  //Set value for val
				val=k;
			}
			void display(){  //display value
				cout<<"Second Parent class value is: "<<this->val<<endl;
			}
}; //end of class Second Parent

class child:public First_Parent, public Second_Parent{   //Parents of child are First_Parent ,Second_Parent ,, Superclass acts like parent since First_Parent , Second_Parent are kept virtually
	protected:
		int val;  //protected value
		public:
			void set_child(int l, int m, int n){   //sets values for all class variables
				Superclass::val=l;  //Syntax to access parent class functions or variables is parent_class_name::fun(if any parameters);
				First_Parent::val=m;
				Second_Parent::val=n;
				val=Superclass::val+ First_Parent::val+Second_Parent::val; //assigning val for child
				Second_Parent::spcl=4; //Syntax to access parent class functions or variables is parent_class_name::variable(if any parameters); 
			}
			
			void display(){  //disslay details of variable values of parent classes 
				Superclass::display();  //Class name:: variable is syntax for accessin respective data from child class
				First_Parent::display();
				Second_Parent::display();
				cout<<"Value of child class is :"<<child::val<<endl;
			}
}; //end of child class 


int main(){
	child obj;  // object of child
	obj.set_child(1,2,3); //set values of parent classes 
	obj.display(); //display values 
	return 0;
}
