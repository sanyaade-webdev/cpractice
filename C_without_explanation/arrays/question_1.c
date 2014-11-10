#include<stdio.h>
int main()
{
int *ptr;
char a[] = "Visual C++";
char *b = "Visual C++";
printf("size of ptr = %d\n",sizeof(ptr));
printf("size of a =%d\nsize of b =%d\n",sizeof(a),sizeof(b));
printf("size of *a = %d\nsize of b* = %d\n",sizeof(*a),sizeof(*b));
}

