        #include <stdio.h>
        #include <sys/types.h>
        int main()
        {
            reverse(1);
        }
        void reverse(int i)
        {
            if (i > 5)
                exit(0);
            printf("%d\n", i);
            return reverse(i++);
        }
