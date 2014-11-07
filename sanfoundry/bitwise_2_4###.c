        #include <stdio.h>
        int main()
        {
            int x = -2;//it is first converted into 2's complement form i.e 1111111......1110
				//then it is right shifted by 1 bit i.e 1111111111111......1111111111
				//for printing it is again converted into 2's complement form i.e - ( 0000000000...0000 + 1) = -1
            x = x >> 1;
            printf("%d\n", x);
        }
