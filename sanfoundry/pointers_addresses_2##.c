        #include <stdio.h>
        int main()
        {
            int i = 10;
            void *p = &i;
            //printf("%d\n", (int*)p);//it generates an error
            //printf("%d\n", (int)*p);//it generates an error
            printf("%d\n", *(int*)p);// it will run

            return 0;

        }
