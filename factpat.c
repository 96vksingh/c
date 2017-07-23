#include<stdio.h>
#include<math.h>
main()
{
  int i,j,y=1,n,x,f1;
  printf("ENTER n=");
  scanf("%d",&n);
  printf("ENTER x=");
  scanf("%d",&x);
  for(i=1;i<=n;i+=2)
   {
     f1=1;
      for(j=1;j<=i;j++)
       {
         f1=f1*j;
       }
       y=y+(pow(x,i)/f1);
   }
   printf("y=%d",y);
 }
