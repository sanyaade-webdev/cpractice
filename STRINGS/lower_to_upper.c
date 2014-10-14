#include <stdio.h>
#include <ctype.h>
void main()
{
   char sentence[100];
   int count, ch, i;
   printf("Enter a sentence \n");
   for (i = 0; (sentence[i] = getchar()) != '\n'; i++)
{
;
}
	  sentence[i] = '\0';
   /*  shows the number of chars accepted in a sentence */
   count = i;
   printf("The given sentence is   : %s", sentence);
   printf("\n Case changed sentence is: ");
   for (i = 0; i < count; i++)
   {
	  if( islower(sentence[i]))//it checks whether character is lower 
	  	{
		 //printf("character is lower\n");
		 ch= toupper(sentence[i]) ;//it changes character from lower case to upper
		}

			else 
			{
			 //  printf("character is upper\n");
			  ch= tolower(sentence[i]);//it changes upper to lower case
			}

			putchar(ch);
	  }
   }
