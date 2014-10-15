#include <iostream>
using namespace std;
int main()
{
//   declare and initialize two float variables
	  float var1 = 58.98;
   float var2 = 70.44;
   // declare a float pointer variable
   float *ptr_var;
   // make ptr_var point to variable var1...
   ptr_var = &var1;
   // prints 58.98
   cout<<"\nThe first value is(var1) "<<*ptr_var;
   cout<<"\nThe address of the first data is "<<ptr_var<<"\n";
   cout<<"\nThen let the same pointer (*ptr_var)";
   cout<<"\npoint to other address...\n";
   // make ptr_var point to variable var2...
   ptr_var = &var2;
   // prints 70.44
   cout<<"\nThe second value is(var2) "<<*ptr_var;
   cout<<"\nThe address of the second data is "<<ptr_var<<endl;
   return 0;
}


