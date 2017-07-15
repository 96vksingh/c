#include<stdio.h>
int main()
{
  int a,b,i,j=1,k=0;
  printf("\nENTER THE RANGE FROM WHERE U WANT TO BEGIN");
  scanf("%d",&a );
  printf("ENTER SECOND NO TILL WHERE U WANT THE PRIME NO");
  scanf("%d ",&b);
  for(i=a;i<=b;i++)
  //while(a<=b)
   {
     for(j=1;j<=i;j++)
     //while(j<=a)
      {
        if((i%j)==0)
         {k++;}
         //printf("k=%d",k);
        // j++;
        // printf("VALUE OF A1=%d",a);
      }
      if(k==2)
       printf("\n %d is PRIME NO",i);
      else
       printf("\n %d is NOT PRIME NO",i);
      k=0;
    //  j=1;
      //printf("VALUE OF A2=%d",a);
      //a++;
    //  printf("VALUE OF A3=%d",a);
   }
   return 0;
}
