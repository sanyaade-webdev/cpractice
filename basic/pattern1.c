#include <stdio.h>
int main()
{
   int row, c, n, temp;
   printf("Enter the number of rows in pyramid of stars you wish to see ");
   scanf("%d",&n);
   temp = n;
		 printf("row=%d\n",row);
   for ( row = n ; row >=0  ; row-- )
   {
	 // for ( c = 1 ; c < temp ; c++ )
	//	 printf(" ");
	  //temp--;
	  for ( c = 1 ; c <= temp ; c++ )
		 printf("*");
	 printf("\n");
for(c=n;c>row-1;c--)
printf(" ");
	 
temp=temp-2;;
   }
   return 0;
}
