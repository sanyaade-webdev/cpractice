        #include <stdio.h>

        int main()

        {

            int i = 97, *p = &i;

            func(&i);

            printf("%d ", *p);

        }

        void func(int *p)

        {

            int j = 2;

            p = &j;

            printf("%d ", *p);

        }
