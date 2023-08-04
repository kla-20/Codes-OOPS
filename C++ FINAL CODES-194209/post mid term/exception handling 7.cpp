#include<iostream>
using namespace std;
void te1()
{
try{
//throw (100);
throw ('a');
//throw (25.2);
}
/*catch(char val)
{
cout<< "you are integer";
}*/
/*catch(char val)
{
cout<< "you are char";
}*/
//catch(float val)
//{
//cout<< "you are float";
//}
catch(...)
{
cout<< "General Exception";
}
}
void te2()//taking a  function for debugging 
{
int val;
cout<<"Enter the value";
cin>>val;
if(val<=0){
throw(val);
}
}
int main(){
te1();
try{
	te2();
}
catch(int val){
cout<<"rethrow exception";
}
return 0;
}
