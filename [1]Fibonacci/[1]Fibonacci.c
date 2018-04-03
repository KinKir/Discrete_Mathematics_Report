/*
* Copyright 2016, LittleNewton
* All rights reserved
*
* filename: [1]Fibonacci.c
* version 3.0
* author LiuPeng
* 2016/12/29
*/

#include <stdio.h>
#include<stdlib.h>
#define LEN sizeof(FibonacciElement)

typedef struct element
{
    struct element *left;
    int num;
    struct element *right;
}FibonacciElement;

int Head_1,Head_2,Length;
FibonacciElement *Head=NULL;

FibonacciElement *Create()
{
    FibonacciElement *p_1=NULL,*p_2=NULL;
    int i;
    p_1=(FibonacciElement *)malloc(LEN);
        Head=p_1;
        p_1->left=NULL;
        p_1->num=Head_1;
        p_1->right=NULL;

    p_2=p_1;

    p_1=(FibonacciElement *)malloc(LEN);
        p_1->left=p_2;
        p_2->right=p_1;
        p_1->num=Head_2;
        p_1->right=NULL;

    for(i=0;i<Length-2;i++)
    {
        p_2=p_1;
        p_1=(FibonacciElement *)malloc(LEN);
            p_1->left=p_2;
            p_2->right=p_1;
            p_1->num=(p_1->left->num)+(p_1->left->left->num);
            p_1->right=NULL;
    }
    return Head;
}

void Input()
{
    printf("Please input 2 integers and length:\n");
    scanf("%d %d %d",&Head_1,&Head_2,&Length);
    printf("\n");
}

void Output(FibonacciElement *p)
{
    int i;
    for(i=0;i<Length;i++)
    {
        printf("%3d",p->num);
        p=p->right;
    }
}

int main()
{
    Input();
    Create();
    Output(Head);
    return 0;
}
