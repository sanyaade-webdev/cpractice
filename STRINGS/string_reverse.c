#include<stdio.h>
#include<string.h>
void Reverse(char str[]);
int main(){
   char str[100];
   printf("Enter a string to reverse: ");
   gets(str);
   Reverse(str);
   printf("Reversed string: ");
   puts(str);
   return 0;
}
void Reverse(char str[]){
   int i,j;
   char temp[100];
   for(i=strlen(str)-1,j=0; i+1!=0; --i,++j)
   {
	  temp[j]=str[i];
   }
   temp[j]='\0';
   strcpy(str,temp);
}
