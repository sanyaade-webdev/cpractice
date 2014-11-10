        #include <stdio.h>

        int main()

        {

            const int i = 10;

            int *ptr=&i;

            *ptr = 20;

            printf("%d\n", i);

            return 0;

        }


