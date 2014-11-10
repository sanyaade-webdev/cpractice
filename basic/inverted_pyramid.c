#include <stdio.h>
int main()
{
   int i,j,rows,temp,n;
   printf("Enter the number of rows: ");
   scanf("%d",&rows);
  temp= n=rows;
   for(i=1;i<=n;i++)
   {
	for(j=n;j>rows;j--)
	  printf(" ");
	  for(j=1;j<=temp;j++)
	  {
		 printf("_");
	  }	
		printf("\n") ;
		rows--;	
		temp=temp-2;
   }
return 0;
}

