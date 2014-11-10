          #include <stdio.h>
          void main()
          {
              int a = 5, b = -7, c = 0, d;
              //d = ++a && ++b || ++c;//it checks for only 1st expresion hence value of c is not incremented	
             // d = c++ && ++b && ++a ;//it first checks for 1st condition.When it becomes true it checks for 2nd condition 
             if(d=(++c && ++b && ++a))
              printf("\na=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
			//if(c++)
				printf("value of d = %d\n",d);
				printf("value of c = %d\n",c);
					
          }
