//page 319
#include<stdio.h>
int main()
{
int i=0,j=0;
int arr[2][3]={1,2,3,4,5,6};//it assigns values first in 1st row i.e [0]-->1,2,3 then in 2nd row [1]-->4,5,6
int arr1[2][3]={{7,8},{9,10}};//it assigns values 7,8 to 1st row and 3rd element is initialized to 0.same for 2nd row
for(i=0;i<2;i++)
{
for (j=0;j<3;j++)
{
printf("array1[%d][%d] = %d\n",i,j,arr[i][j]);
}
}
for(i=0;i<2;i++)
{
for (j=0;j<3;j++)
{
printf("array2[%d][%d] = %d\n",i,j,arr1[i][j]);
}
}
return 0;
}
