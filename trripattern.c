#include<stdio.h>
main()
{
  int i,j,k,a,h,d,l,u;
  printf("HOW MUCH LONG PATTERN U WANT(ODD)-");
  scanf("%d", &a);

  for(i=1;i<=(a/2)+1;i++)
    {
      l=a/2; j=a;
      u=a/2;
      d=a/2;
      for(h=1;h<=a;h++)
       {
          if(i%2==0)
          {
            if (h==d || h==u)
            printf("*");
            else
            printf("\t");
            d--; u++;
          }
          else
          {
          if(h==d || h==u || h==l)
          printf("*");
          else
          printf("\t");
          d--; u++;
        }
      }
      printf("\n");

      }

    }
