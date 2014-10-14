#include <iostream>
using namespace std;
int main()
{
   int  x = 4, y = 7;
   // function prototype...
   void addcon(int*, int*);
   cout<<"\nInitial value of x = "<<x;
   cout<<"\nInitial value of y = "<<y;
   cout<<"\nThen calls function addcon()\n";
   cout<<"\nBringing along the &x = "<<&x<<endl;
   cout<<"and &y = "<<&y<<"\n";
   cout;
   // function call, address of x any y are passed to addcon()
   addcon(&x, &y);
   cout<<"\nAdd 10...";
   cout<<"\nNew value of x =  "<<x;
   cout<<"\nminus 10...";
   cout<<"\nNew value of y =  "<<y<<endl;
   return 0;
}
// a function definition, parameters are pointers...
void addcon(int *px, int *py)
{
   // adds 10 to the data stored in memory pointed to by px
   *px = *px + 10;
   // minus 10 to the data stored in memory pointed to by py
   *py = *py - 10;
   
}
