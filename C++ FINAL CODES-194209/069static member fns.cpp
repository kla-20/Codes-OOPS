//static member functions
//usage  1
#include<iostream> //header
using namespace std; //standard namespace

class a{ //class name is a
	static int i; //static variable in private
	public:
		static void set(int l){i=l;}  //static function can access static variable in pvt or public
		void display(); //declaration of display
};

int a::i; //a initialized to 0
void a::display(){ //display static variable value
	cout<<"the static variable is changed to:"<<i<<endl;
}

int main(){
	a object; //create object of class a
	object.display(); //display object =0
	a::set(3); //set a
	object.display();// display a=3
	return 0;
}

