#include<stdio.h>
main()
  {
    int i,a,j;
    printf("HOW MUCH LONG PATTERN U WANT-");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
      for(j=1;j<=i;j++)
      printf("*");
      printf("\n");
    }

  }
