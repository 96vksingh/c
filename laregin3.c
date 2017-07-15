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
     if((a>b)&&(a>c))
        {
          printf("FIRST LARGEST IS-%d\n",a) ;
            if(b>c)
              {
                printf("SECOND LARGEST IS-%d\n",b);
                printf("THIRD THE SMALLEST ONE IS-%d\n",c);
              }
           else
             {
               printf("SECOND LARGSEST IS-%d\n",c);
               printf("THIRD THE SMALLEST ONE IS-%d\n",b);
             }
       }
   else
   {
      if(b>c)
          {
            printf("FIRST LARGEST IS-%d\n",b);
            if(a>c)
             {
               printf("SECOND LARGEST IS-%d\n",a);
               printf("THIRD THE SMALLEST ONE IS-%d\n",c);;
             }
            else
            {
              printf("SECOND LARGSEST IS-%d\n",c);
              printf("THIRD THE SMALLEST ONE IS-%d\n",a);
            }
        }
      else
       {
          printf("FIRST LARGEST IS-%d\n",c);
           if(b>a)
            {
              printf("SECOND LARGEST IS-%d\n",b);
              printf("THIRD THE SMALLEST ONE IS-%d\n",a);
            }
          else
           {
             printf("SECOND LARGEST IS-%d\n",a);
             printf("THIRD THE SMALLEST ONE IS-%d\n",b);
           }
       }
    }
    }
    else
    {
      printf("THE NOS ARE EQUAL\n");            //if(a)
    }
}
