//
//  mathtable.c
//  programs
//
//  Created by Vishal Kumar Singh on 24/06/17.
//  Copyright © 2017 Vishal Kumar Singh. All rights reserved.
//

#include <stdio.h>
main()
{
    int a,b,c,d=1;
    printf("ENTER THE NO WHOSE TABLE YOU WANT-");
    scanf("%d",&a);
    printf("TILL HOW MUCH YOU WANT-");
    scanf("%d",&b);
    for(int c=1;c<=b;c++)
    {
        d=a*c;
        printf("%dx%d=%d",a,c,d);
    }
}
