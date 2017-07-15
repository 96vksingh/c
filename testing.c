#include<stdio.h>
#include<float.h>
#include<limits.h>
int main()
{//int a,float f,char c,double d;
printf("\nthe size of integer is%d",sizeof(int));
printf("\nthe range is%d to %d",INT_MIN,INT_MAX);
printf("\nthe size of character is%d",sizeof(char));
printf("\nthe range is%d to %d",CHAR_MIN,CHAR_MAX);
printf("\nthe size of float is%d",sizeof(float));
printf("\nthe range is%u to %u",FLT_MIN,FLT_MAX);
printf("\nthe size of double is%d",sizeof(double));
printf("\nthe range is%lf to %lf",DBL_MIN,DBL_MAX);
return 0;
}
