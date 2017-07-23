#include<stdio.h>
#include<string.h>     //header files
main()
{
  char ch[30];
  int i=0,j,p,k=0,t=0,g=0,u=0;
  printf("\nENTER THE STRING-");
  gets(ch);
  ch[strlen(ch)]=' ';
  //printf("STRING IS-%s",ch);
 for(p=0;p<=strlen(ch)+1;p++)
  {
    if(ch[p]==' ')
     {
       for(j=1;j<=k;j++)
        {
    //      printf("\nChecking-----j=%d...&..k=%d...&..u=%d....&....t=%d........char[%d]=%c....&char[%d]=%c",j,k,u,t-1,u,ch[u],t-1,ch[t-1]);
            if(ch[u]==ch[t-1])
                i++;
            u++;
            t--;
        }
            if(i==k)
                g++;
            k=0;
            ++u;
            t=u;
            i=0;
     }
     else
     {
      k++;
      t++;
     }
  }
   printf("\nSentence IS %d PALINDROME ",g);
 }
