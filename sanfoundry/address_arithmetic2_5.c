        #include <stdio.h>

        int main()

        {

            int a[4] = {1, 2, 3, 4};
//int c[4]={0,0,0,0};
int c,d,e;
char f,g,h,i,y;

            int b[4] = {1, 2, 3, 4};

            int n = &b[2] - &a[2];

            printf("%d\n", n);

        }
