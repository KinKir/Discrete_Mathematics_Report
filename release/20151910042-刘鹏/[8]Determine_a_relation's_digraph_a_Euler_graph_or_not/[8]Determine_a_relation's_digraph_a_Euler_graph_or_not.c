/*
* Copyright 2016, LittleNewton
* All rights reserved
*
* filename: [8]Determine_a_relation's_digraph_a_Euler_graph_or_not.c
* version 3.0
* author LiuPeng
* 2016/12/29
*/

#include<stdio.h>
#define N 6
int main()
{
    int i,j;
    int a[N][N],guard[N]={0};
    int in_degree[N],out_degree[N]={0};
    printf("Please input the matrix:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
             if(a[i][j]==1 && guard[j]==0)
            {
                guard[j]=1;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        if(guard[i]!=1)
        {
            printf("the graph G do not have a Euler circuit.\n");
            return 0;
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(a[i][j]==1)
            {
                in_degree[j]+=1;
                out_degree[i]+=1;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        if(in_degree[i]/2!=0)
        {
            printf("the graph G do not have a Euler circuit.\n");
            return 0;
        }
    }
    printf("the graph G have a Euler circuit.\n");
    return 0;
}
