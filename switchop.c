#include<stdio.h>
#include<stdlib.h>
main()
{
  system("clear");
  char c,d,e; int a,b,l;
  printf("ENTER 1st NO-");
  scanf("%d",&a);
  printf("ENTER 2nd NO-");
  scanf("%d",&b);
  printf("\nENTER'+FOR ADDITION");
            printf("\n ENTER '-' FOR SUBTRACTION");
             printf("\nENTER '*' FOR MULTIPLICATION");
             printf("\nENTER '/' FOR DIVISION");
             printf("\nENTER MOD SYMBOL '%' " );
             printf("\nENTER SYMBOL-");
             fflush(stdin);
             scanf(" %c",&d);
  switch(d)
  {
    case '+': l=0;
              l=a+b;
               printf("\nSUM=%d",l);
               break;
    case '-':{printf("\nTYPE 1 IF A>B");
                          printf("\nTYPE 2 IF A<B");
                           fflush(stdin);
                           printf("\nENTER-");
                        t:  scanf(" %d",&e);
                          switch(e)
                          {
                            case 1:printf("\nSUBTRACTION=%d",a-b);
                                     break;
                            case 2:printf("\nSUBTRACTION=%d",b-a);
                                     break;
                              default:printf("\nINVALID");
                                        goto t;
                          }

  }
                break;
    case '*':printf("\nMULTIPLICATION=%d",a*b);
                break;
    case '/':{printf("\nTYPE 1 IF A>B");
                          printf("\nTYPE 2 IF A<B");
                          printf("\nENTER-");
                           fflush(stdin);
                        k:  scanf(" %d",&e);
                          switch(e)
                          {
                            case 1:if(b==0)
                                     {
                                       printf("\nDIVISION NOT POSSIBLE");
                                     }
                                     else
                                     {
                                    printf("\nDIVISION=%d",a/b);}
                                     break;
                            case 2:if(a==0)
                                     {
                                       printf("\nDIVISION NOT POSSIBLE");
                                     }
                                     else
                                     {
                                     printf("\nDIVISION=%d",b/a);
                                     }
                                     break;
                              default:printf("\nINVALID");
                              goto k;
                          }

  }
                break;
    case '%':printf("\nTYPE 1 IF A>B");
                  printf("\nTYPE 2 IF A<B");
                  printf("\nENTER-");
                   fflush(stdin);
                        u:  scanf(" %d",&e);
                          switch(e)
                          {
                            case 1:if(b==0)
                                     printf("\nNOT POSSIBLE");
                             else
                                     printf("\nMODULOUS=%d",a%b);
                                     break;
                            case 2:if(a==0)
                              printf("\nNOT POSSIBLE");
                            else

                                     printf("\nMODULOUS=%d",b%a);
                                     break;
                              default:printf("\nINVALID");
                              goto u;
                          }
                break;
                default:{printf("\nINVALID THE PROGRAM WILL EXIT\n");
                  // scanf("%c",&d);
            //       if()
                 system("exit");
                 }

  }
}
