#include<stdio.h>
#include<string.h>     //header files
main()
{
  char ch[10];
  int i,j=0;
  printf("\nENTER THE STRING-");
  scanf("%s", &ch);
 int l=strlen(ch);       //LENGTH OF STRING
 int k=l;
 for(i=0;i<l;i++)
  {
    //printf("ch[%d]=%c",i,ch[i]);
    if(ch[i]==ch[k-1])                //LOGIC PART
    {
      k--;
      j++;
      printf("j=%d", j);
    }
  }
  printf("j=%d", j);
  printf("l=%d",l);
  if(j==strlen(ch))
   printf("PALINDROME");
  else
   printf("NOT PALINDROME");
  //printf("\nl=%d", l);
  //printf("\nj=%d", j);

}
