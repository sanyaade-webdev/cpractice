#include<stdio.h>
int main()
{
   int choice,i=0;
   enum spectrum{orange,pink,red,white,black,blue};
   enum levels{low=100,medium=500,high=1000};
   enum animals{dog,cat,camel=10,horse,elephant=20,lion};
   enum spectrum color;
   enum levels current_level;
   /////////////////// default values start from 0,1,2,3,.......... ///////////////
   while(i++<5)
   {
	  printf("enter the color \n");
	  scanf("%d",&color);
	  printf("the color and values are %d\n",color);
   }
   i=0;
   ///////////////// values are initialized to some particular value /////////////
   while(i++<3)
   {
	  printf("enter the level\n");
	  scanf("%d",&current_level);
	  switch(current_level)
	  {
		 case 100:
			printf("level is low\n");
			break;
		 case 500:
			printf("level is medium\n");
			break;
		 case 1000:
			printf("level is high\n");
			break;
		 default :
			printf("choice is wrong\n");
	  }
	  printf("enter level values are %d\n",black);
   }

   return 0;
}
