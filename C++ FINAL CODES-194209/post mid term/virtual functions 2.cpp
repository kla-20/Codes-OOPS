/* Here, a base class reference is used to access
a virtual function. */
#include <iostream>
using namespace std;
class base {
public:
virtual void vfunc() {
cout << "This is base's vfunc().\n";
}
};
class derived1 : public base {
public:
void vfunc() {
cout << "This is derived1's vfunc().\n";
}
};
class derived2 : public base {
public:void vfunc() {
cout << "This is derived2's vfunc().\n";
}
};
void f(base &r) {
r.vfunc();
}
int main()
{
base b;
derived1 d1;
derived2 d2;
f(b); 
f(d1); 
f(d2); 
return 0;
}
