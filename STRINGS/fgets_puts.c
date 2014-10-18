#include<stdio.h>
int main()
{
char name[10];
char name1[10];
fgets(name,10,stdin);//it appends '\n' in the last
//fgets(name1,10,stdin);
puts(name);//it automatically appends '\n' in the last.So we get two new lines.
puts(name);//it automatically appends '\n' in the last.So we get one new lines.
///puts(name1);
/////////////gets and fputs/////////
gets(name1);//it doesn't append '\n' new line character
fputs(name1,stdout);
fputs(name,stdout);

return 0;
}
