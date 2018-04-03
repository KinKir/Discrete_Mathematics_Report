/*
* Copyright 2016, LittleNewton
* All rights reserved
*
* filename: [5]Equivalence_Relation
* version 3.0
* author LiuPeng
* 2016/12/29
*/

#include <stdio.h>
#define n 3
void star()
{
    printf("---------------------------------------\n");
}
int main()
{
    int i,j,k;
    int a[n][n];
    star();
    printf("Please input the matrix of relation R:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d,",&a[i][j]);
        }
    }
    star();
    printf("Your matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    star();
    for(i=0;i<n;i++)
    {
        if(a[i][i]==0)
        {
            printf("R is not an equivalence relation.");
            return 0;
        }
        else
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=a[j][i])
                {
                    printf("R is not an equivalence relation.");
                    return 0;
                }
                else
                {
                    for(k=0;k<n;k++)
                    {
                        if((a[i][k]==1 && a[k][j]==1) && a[i][j]!=1)
                        {
                            printf("R is not an equivalence relation.");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    printf("R is an equivalence relation.\n");
    star();
    return 0;
}
