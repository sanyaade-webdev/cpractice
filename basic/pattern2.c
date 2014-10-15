#include <stdio.h>
int main()
{
   int i,j,rows,n;
   printf("Enter the number of rows: ");
   scanf("%d",&rows);
   n=rows;
   for(i=1;i<=n;++i)
   {
	  for(j=1;j<=rows;++j)
	  {
		 printf("* ");
		 
	  }
	  printf("\n");
	  rows--;
   }
}

