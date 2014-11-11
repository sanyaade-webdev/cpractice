//PAGE 338
#include <stdio.h>
int main(void)
{
int zippo[4][2] = { {2,4}, {6,8}, {1,3}, {5, 7} };
printf("zippo = %p\n,zippo + 1 = %p\n",zippo,zippo + 1);
printf("zippo[0] = %p\n, zippo[0] + 1 = %p\n",zippo[0],zippo[0] + 1);
printf(" *zippo = %p\n,*zippo + 1 = %p\n",*zippo,*zippo + 1);
printf("zippo[0][0] = %d\n", zippo[0][0]);
printf(" *zippo[0] = %d\n", *zippo[0]);
printf("**zippo = %d\n", **zippo);
printf("zippo[2][1] = %d\n", zippo[2][1]);
printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo+2) + 1));
/*
 zippo         -->    the address of the first two-int element
 zippo+2       -->    the address of the third two-int element
 *(zippo+2)    -->    the third element, a two-int array, hence the address of its first element, an int
 *(zippo+2) +1 -->    the address of the second element of the two-int array, also an int
 *(*(zippo+2)+ 1) --> the value of the second int in the third row (zippo[2][1])

*/
return 0;
}
