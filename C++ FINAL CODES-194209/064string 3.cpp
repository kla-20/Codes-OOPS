//string 3
#include<iostream>//header
using namespace std;//standard namespace
int main(){
	char str[50]; //char array named str size=50
	cout<<"Enter the string"<<endl; //ask to enter string
	cin.get(str,20); //cin => input from user into str of size 20 
	cout<<"you have entered "<<str; //print str
	return 0;
}
// space can be used and word is printed correctly
