    #include <stdio.h>

    int main()

    {

        void *p;

        int a[4] = {1, 2, 3, 8};

        p = &a[3];

        int *ptr = &a[2];

        int n = (int *)p - ptr;

        printf("%d\n", n);
return 0;
}
