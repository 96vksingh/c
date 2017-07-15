#include<stdio.h>
#include<stdlib.h>
main()
{
  system("clear");
  float f,c,cc,ff;
  char ch;
  printf("Enter C if u want to calculate celcius and F forfarenheit-");
  scanf("%c",&ch);
  switch(ch)
  {
  case 'C':
  {
  printf("\nENTER THE FARENHEIT-");
  scanf("%f",&f);
  c=(f*(5.0/9.0))+32.0;
  printf("THE CALCULATED CELCIOUS IS-%f",c);}
  break;
  case 'F':
  {
  printf("ENTER THE CELCIOUS-");
  printf("value of f1 value----%f",ff);
  scanf("%f",&cc);
  printf("value of f2 value----%f",ff);
  ff=(cc-32.0)*(5.0/9.0);
  printf("THE CALCULATED FARENHEIT IS-%f",ff);
  break;
}
}
}
