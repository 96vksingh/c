#include<stdio.h>
main()
{
  int i,j,k,a,h,d,l,u;
  printf("HOW MUCH LONG PATTERN U WANT(ODD)-");
  scanf("%d", &a);

  for(i=1;i<=(a/2)+1;i++)
    {
      l=(a/2)+1; j=a;
      u=(a/2)+1;
      d=(a/2)+1;
      for(h=1;h<=a;h++)
       {
          if(i%2==0)
          {
            if (h==d+1 || h==u+1)
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
          d-=2; u+=2;
        }
      }
      printf("\n");
      }

    }
