#include<stdio.h>
#include<string.h>
main()
{
	int i,len,flag;
	char a[8];
	printf("Enter the string:");
  //scanf("%s", &a);
	gets(a);
  //a[3]=' ';
  printf("string:%s",a);


  printf("length:%d",strlen(a));
  for(int i=0;i<strlen(a)+1;i++)
  {
    a[6]=' ';
    if(a[i]==' ')
     printf("\nSPACE");
  }
  printf("\n2-string:%s",a);
  printf("\n2length:%d",strlen(a));
}
