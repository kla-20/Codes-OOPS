//C++ has the ability to provide the operators with a special meaning for a data type,
// this ability is known as operator overloading.

//Return_Type classname :: operator op(Argument list)
// {
   // Function Body
// }
//Operator function must be either non-static (member function) or friend function.
//Operator Overloading can be done by using three approaches, they are

   // Overloading unary operator.
   // Overloading binary operator.
   // Overloading binary operator using a friend function.

//Some criteria/rules to define the operator function:

   // In case of a non-static function, the binary operator should have
    
	// only one argument and unary should not have an argument.
    //In the case of a friend function, the binary operator should 
	//have only two argument and unary should have only one argument.
   // All the class member object should be public if operator overloading is implemented.
   // Operators that cannot be overloaded are . .* :: ?:
   // Operator cannot be used to overload when declaring that function 
   //as friend function = () [] ->.
   //The arguments in the operator overloading are passed only by reference,

// C++ program to show unary operator overloading 
#include <iostream> 
  
using namespace std; 
  
class Distance { 
public: 
  
    
    int feet, inch; 
  
    Distance(int f, int i) 
    { 
        this->feet = f; 
        this->inch = i; 
    } 
  
    void operator-() 
    { 
        feet--; 
        inch--; 
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch; 
    } 
}; 
  

int main() 
{ 
    
    Distance d1(8, 9); 
    -d1; 
    return 0; 
}
