#include<stdio.h>
main()
{
  int i,j,k,n,r,t=0,f1=1,f2=1,f3=1;
  printf("ENTER n=");
  scanf("%d",&n);
  printf("ENTER r=");
  scanf("%d",&r);
  for(i=1,j=1,k=1;i<=n && j<=r && k<=(n-r);i++,j++,k++)
   {
     f1=f1*i;
     f2=f2*j;
     f3=f3*k;
   }
   t= f1/(f2*f3);
   printf("TOtAL=%d",t);

}
