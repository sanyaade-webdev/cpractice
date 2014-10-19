//page 314
#include<stdio.h>
#define SIZE 5
int main(void)
{
int oxen[SIZE] = {5,3,2,8};
int yaks[SIZE]={5,3,4,8,6};
//yaks = oxen;//it doesn't work
yaks[SIZE] = oxen[SIZE];
printf("yaks = %d %d %d %d %d\n",yaks[0],yaks[1],yaks[2],yaks[3],yaks[10]);
//int yaks[SIZE] = {5,3,2,8};//we can't initialized values to pre declared array
/* ok here
 * */
/* not allowed */
/* invalid
 * */
/* doesn't work */
return ;
}
