#include<iostream>
using namespace std;
int main()
{
int nums[ ] = {92,81,70,69,58};
cout<<"\nArray's element     Memory address";
cout<<"\n----------------------------------";
for(int dex=0; dex<5; dex++)
cout<<"\n\t"<<*(nums + dex)<<"\t\t"<<(nums + dex);
cout<<"\n----------------------------------\n";
return 0;
}
