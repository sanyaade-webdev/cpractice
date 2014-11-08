        #include <stdio.h>
        int main()
        {
            int y = 1, x = 0;
            int l = (0,y++) ? y : x;
            printf("%d\n", l);
        }
