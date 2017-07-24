#include<stdio.h>
#include<stdlib.h>
    int main()
    {
       int a,c=0,i,j,d;
       printf("HOW MUCH LONG PATTERN U WANT(ODD)-");
       scanf("%d", &a);
       for(i=(a/2)+1;i>=1;i--)
          {
            c=c+1;
               for(j=1;j<=a;j++)
                 {
               if(j==i)
                {
                  for(d=1;d<=(2*c)-1;d+=2)
                   printf("* ");
                }
                else
                printf(" ");
             }
             printf("\n");
        }
        return 0;
    }
