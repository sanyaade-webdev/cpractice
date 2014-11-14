        #include <stdio.h>
        int main()
        {
            int i = 1;
            if (i++ && (i==1))
                printf("Yes...I  = %d\n",i);
            else
                printf("No....I = %d\n",i);
        }
