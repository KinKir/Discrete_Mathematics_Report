/*
* Copyright 2016, LittleNewton
* All rights reserved
*
* filename: [3]Product_of_Boolean_matrix.c
* version 3.0
* author LiuPeng
* 2016/12/29
*/
#include <stdio.h>
#define ROW_1 3
#define COLUMN_1 3
#define ROW_2 3
#define COLUMN_2 3
int main()
{
    printf("Please input the Matrix_1:\n");
    int i,j,k,p;
    int a[ROW_1][COLUMN_1];
    int b[ROW_2][COLUMN_2];
    int c[ROW_1][COLUMN_2]={{0}};
    for(i=0;i<ROW_1;i++)
    {
        for(j=0;j<COLUMN_1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Please input the Matrix_2:\n");
    for(i=0;i<ROW_2;i++)
    {
        for(j=0;j<COLUMN_2;j++)
        {
            scanf("%d,",&b[i][j]);
        }
    }
    for(i=0;i<ROW_1;i++)
    {
        for(j=0;j<COLUMN_2;j++)
        {
            {
                for(k=0;k<COLUMN_1;k++)
                {
                    p=a[i][k]*b[k][j];
                     if(p==1)
                    {
                        c[i][j]=1;break;
                    }
                }
            }
        }
    }
    printf("The product of the two Matrices is:\n");
    for(i=0;i<ROW_1;i++)
    {
        for(j=0;j<COLUMN_2;j++)
        {
            printf("%3d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
