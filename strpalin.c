#include<stdio.h>
#include<string.h>     //header files
int main()
{
  char ch[30],b[0];   int i=0,j,p,k=0,t=0,g=0,u=0,a=0;
  printf("\nENTER THE STRING-");
  gets(ch);
  ch[strlen(ch)]=' ';
 for(p=0;p<=strlen(ch)+1;p++)
  {
    if(ch[p]==' ')
     {
       for(j=1;j<=k;j++)
        {
            if(ch[u]==ch[t-1])
                {i++;
                //  b[a]=ch[u];
                }
            u++;
            t--;
        }
            if(i==k)
                g++;
            k=0;
            ++u;
            t=u;
            i=0;
            a++;
     }
     else
     {
      k++;
      t++;
     }
  }
  // for(k=0;k<a;k++)
   //printf("%d PALINdrome of sentence is-%s ",a,b[a]);
   printf("\nSentence haS %d PALINDROME ",g);
   return 0;
 }
