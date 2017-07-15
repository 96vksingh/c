//
//  vk.c
//  my c programs
//
//  Created by Vishal Kumar Singh on 23/06/17.
//  Copyright © 2017 Vishal Kumar Singh. All rights reserved.
//

#include <stdio.h>
main()
{
    int a,b,c=1,d;
    printf("ENTER NO WHICH U WANT TO PRINT TABLE=");
    scanf("%d",&a);
    printf("ENTER THE NO TILL WHERE U WANT THE TABLE=");
    scanf("%d",&d);
    for(b=1;b<=d;b++)
       {
           c=a*b;
           printf("%d*%d=%d",a,b,c);
       }
}
