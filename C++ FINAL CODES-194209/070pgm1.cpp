//Program-1:
#include <iostream> //header
using namespace std; //using standard namespace 
class myclass {    //defining a class called myclass 
public:
int who;    //a member varible of type int whose name is who
myclass(int id);   //declaring a parameterised constructor whose parameter is int id
} glob_ob1(1);  //Gobal obj will be first executed

myclass obj(6);    //global cons giving the integer 6 but its followed after  glob_ob1(6)

myclass::myclass(int id)  //cons defined outside 

{
cout << "Initializing " << id << "\n";
who = id;   //initializing the member variable who to id value (the parameter which is passed)
}
void fun()  //global function void definition
{ 
myclass func_ob2(2); // inside a global function  its calling local object  func_ob2 and passing  parameter 2
cout<< "Here is a function"<<endl; 
}
int main()
{
fun(); //calling the function but is done after glob_ob1 and myclass obj(6)
myclass local_ob1(3);  //local object  and sending parameter whose value is 3
cout << "This will not be first line displayed.\n";
myclass local_ob2(4);  // local object and sending parameter whose value is 4
return 0;
}
//order of invocation
/*glob 1, glob 2 (6), functional object (2), local object (3) , local object 2 (4)*/
