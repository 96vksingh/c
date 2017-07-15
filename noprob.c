#include<stdio.h>
main()
{
  int a,b,c;
  printf("ENTER !ST NO---");
  scanf("%d",&a);
  printf("ENTER 2nd NO--- ");
  scanf("%d",&b);
  printf("ENTER 3re NO---");
  scanf("%d",&c);
  if((a!=b)&&(b!=c))
  {
    if((a+b)!>(b+c)&&(b+c)>(c+a))
     {
       if(b>c)
        {
          printf("FIRST LARGEST IS-%d\n",b);
          printf("SECOND LARGEST IS-%d\n",a);
        }
     }
    else
     {
       if((a+c)>(a+b))
        {
          if(a>c)
           {
                       printf("FIRST LARGEST IS-%d\n",a) ;
                       printf("SECOND LARGSEST IS-%d\n",c);
           }
        }
        else
        {
          if(a>b)
          {

            
          }
        }
     }
  }
