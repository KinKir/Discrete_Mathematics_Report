/*
* Copyright 2016, LittleNewton
* All rights reserved
*
* filename: [4]In_Degree_and_Out_Degree
* version 3.0
* author LiuPeng
* 2016/12/29
*/#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3]={{0,1,1},{1,0,0},{0,1,0}};
    int in[3]={0}; /* This is the indegree of every element in set A */
    int out[3]={0};/* This is the outdegree of every element in set A */
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                in[i]+=1;
            }
            if(a[j][i]==1)
            {
                out[i]+=1;
            }
        }
    }
    printf("the in_degree and out_degree of every every element are as follows;\n");
    printf("-----------\n");
    printf("a1 a2 a3\n");
    printf("-----------\n");
    for(i=0;i<3;i++)
    {
        printf("%-3d",in[i]);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("%-3d",out[i]);
    }
    return 0;
}
