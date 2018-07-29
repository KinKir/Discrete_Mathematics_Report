/*
* Copyright 2016, LittleNewton
* All rights reserved
*
* filename: [6]Transitive_Closure
* version 3.0
* author LiuPeng
* 2016/12/29
*/

#include <stdio.h>
#define n 4
int i;
int j;
int k;
void ScanMatrix(int a[n][n])
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void PrintMatrix(int a[n][n])
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int closure[n][n]={{0}};
    printf("Please input the matrix of relation R:\n");
    ScanMatrix(closure);
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(closure[i][j]==1 || (closure[i][k]==1 && closure[k][j]==1))
                   {
                       closure[i][j]=1;
                   }
            }
        }
    }
    printf("The transitive closure is:\n");
    PrintMatrix(closure);
    return 0;
}
