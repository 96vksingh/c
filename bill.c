#include<stdio.h>
main()
{
int a,b=1;
printf("ENTER THE NO OF CALLS-");
scanf("%d",&a);
if((a>0)&&(a<200))
 {
  b=a*1;
  printf("CUSTOMER NAME--MR XYZ\n");
  printf("ISP-..........\n");
  printf("PHONE NO--*********\n");
  printf("TOTAL CALLS-%a\n",a);
  printf("Sno. \t PHONE \t COST PER CALL \t ToTAL\n");
  printf("1 \t %d \t 1 \t %d",a,b*1);
 }
 else
  if((a>200)&&(a<300))
  {
   b=200+((a-200)*2);

 printf("CUSTOMER NAME--MR XYZ\n");
 printf("ISP-..........\n");
 printf("PHONE NO--*********\n");
 printf("TOTAL CALLS-%a\n",a);
 printf("Sno. \t PHONE \t COST \t ToTAL\n");
 printf("1 \t 200 \t 1 \t %d\n",1*200);
 printf("2 \t%d \t 2 \t %d\n",a-200,(a-200)*b);

}
  printf("NET-%d\n",b);
}
