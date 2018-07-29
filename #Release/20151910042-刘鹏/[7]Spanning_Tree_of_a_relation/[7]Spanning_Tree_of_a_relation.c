/*
* Copyright 2016, LittleNewton
* All rights reserved
*
* filename: [7]Spanning_Tree_of_a_relation
* version 3.0
* author LiuPeng
* 2016/12/29
*/

#include <stdio.h>
#define N 6
int main()
{
    int relation_matrix[N][N];
    int spanning_tree[N][N];
    int guard[N]={0};
    int i,j;
    printf("Please input the relation matrix:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&relation_matrix[i][j]);
            spanning_tree[i][j]=0;
            guard[i]=0;
        }
    }
    if(relation_matrix[i][j]==1 && guard[j]==0)
    {
        spanning_tree[i][j]=1;
        spanning_tree[j][i]=1;
        guard[j]=1;
    }
    for(i=0;i<N;i++)
    {
        if(guard[i]==0)
        {
            printf("This directed graph is not connected.");
            return 0;
        }
    }
	printf("Spanning tree:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%3d",spanning_tree[i][j]);
        }
        printf("\n");
    }
    return 0;
}