        #include <stdio.h>
        int main()
        {
            int x = 1,k;
            short int i = 2;
            float f = 3;
printf("size of float%d\n",sizeof(float));
            if (2 ? (f==3) : i)//it checks for the condition 
                printf("float\n");
            else if (sizeof((x == 2) ? f : i) == sizeof(short int))
                printf("short int\n");
printf("k =%d\n",k);
        }
