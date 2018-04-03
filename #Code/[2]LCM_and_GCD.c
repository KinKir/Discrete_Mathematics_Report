/*
* Copyright 2016, LittleNewton
* All rights reserved
*
* filename: [2][2]LCM_and_GCD.c
* version 3.0
* author LiuPeng
* 2016/12/29
*/
#include <stdio.h>
void Input(int *a,int *b)
{
    printf("Please input a and b:\n");
    scanf("%d,%d",a,b);
}

void GCD(int *a,int *b)
{
    while(*a!=*b)
    {
        if(*a>*b)
        {
            *a=*a-*b;
        }
        else
        {
            *b=*b-*a;
        }
    }
}

void Output(int *p,int *p_m)
{
    printf("GCD(a,b)=%d\n",*p);
    printf("LCM(a,b)=%d\n",(*p_m)/(*p));
}

int main()
{
    int a,b,memo;
    int *p_a=&a,*p_b=&b,*p_memo=&memo;
    Input(p_a,p_b);
    memo=a*b;
    GCD(p_a,p_b);
    Output(p_a,p_memo);
    return 0;
}
