// exception handling based on user input
#include<iostream>
using namespace std;

void teste()
{
int real;
cout<<"Enter the value"<<endl;
cin>>real;
try{
if(real<=0)
{
throw(real);
}
else{
cout<<"the value is:"<<real;
}
}
catch(int val){
cout<<"Exception occured";
}
}
int main(){
teste();
return 0;
}

