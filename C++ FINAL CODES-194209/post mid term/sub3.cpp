// A safe array example.
#include <iostream>
#include <cstdlib>
using namespace std;
class atype {
int a[3];
char b[3];
public:
atype(int i, int j, int k,char i1, char j2, char k3) {
a[0] = i;
a[1] = j;
a[2] = k;
b[0] = i1;
b[1] = j2;
b[2] = k3;

}
int &operator[](int i);
};
// Provide range checking for atype.
int &atype::operator[](int i)
{
if(i<0 || i> 2) {
cout << "Boundary Error\n";
exit(1);
}
return a[i];
}
int main()
{
atype ob(1, 2, 3,'a','b','c');
cout << ob[1]; // displays 2
cout << " ";
ob[1] = 25; // [] appears on left
cout << ob[1]; // displays 25
ob[3] = 44; // generates runtime error, 3 out-of-range
return 0;
}
