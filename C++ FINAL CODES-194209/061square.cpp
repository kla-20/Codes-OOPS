#include<iostream>//header
using namespace std;//standard namespace
class square{//square class
	private: int length;//private data
	public:
		void get();//get MF return type void , no object parameters  declaration
		void print();//print MF return type void , no object parameters  declaration
};

inline void square ::get(){ //inline fun get take input from user
	cout<<"enter the length of the square: ";
	cin>>length;
}
inline void square::print(){  //inline fun print , print area ,perimeter 
	cout<<"the area of the square is:" <<(length*length);
	cout<<"\n";
	cout<<"the perimeter of the square is : \n" <<(4*length);
}

int main()
{
	square obj; //obj of class square
	obj.get(); //get details
	obj.print();//print details
	return 0;
}
