#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    int count = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] == 0)
            {
                count++;
            }
        }
    }
    
    if(count >(3*3)/2)
    {
        printf("it is a sparse matrix");
    }
    else 
    printf("it is dense matrix");
}