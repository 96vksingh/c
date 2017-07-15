#include<stdio.h>
main()
{
  int a,b,c,i;
  printf("\nENTER @ NO A & B ");
  scanf("%d %d ",&a,&b);
  if(a>b)
   c=a;
   else
   c=b;
   for(i=0;i<=c;i++)
   {
     if((a/i)==a && (a/i)==1)
      {
        printf("THE NO IS PRIME");
      }
      else
      printf("NOT PRIME");
      if((b/i)==a && (b/i)==1)
       {
         printf("THE NO IS PRIME");
       }
       else
       printf("NOT PRIME");

   }


}
