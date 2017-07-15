#include<stdio.h>
#include<float.h>
#include<limits.h>
main()
{
  int a,b;
  float c,d;
  char e;
  double f;
  printf("\nSIZE OF INT IS %d",sizeof(a));
  printf("\nRANGE OF INT IS FROM %d TO %d",INT_MIN,INT_MAX);
  printf("\nSIZE OF INT IS %d",sizeof(short int));
  printf("\nRANGE OF INT IS FROM %d TO %d",SHRT_MIN,SHRT_MAX);
  printf("\nSIZE OF FLOAT IS %d",sizeof(float));
  printf("\nRANGE IS FROM %u TO %u",FLT_MIN,FLT_MAX);
  printf("\nSIZE OF CHAR IS %d",sizeof(char));
  printf("\nRANGE IS FROM %d TO %d",CHAR_MIN,CHAR_MAX);
  printf("\nSIZE OF DOUBLE IS %d",sizeof(double));
  printf("\nRANGE IS FROM %lf TO %lf \n",DBL_MIN,DBL_MAX);
}
