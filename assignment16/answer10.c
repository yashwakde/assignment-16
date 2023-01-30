#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    int count = 0;
    printf("enter a array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
     
    }for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
  int big =-1,s;
      for(i=0;i<3;i++)
    {
        count =0;
        for(j=0;j<3;j++)
        {
            if(a[i][j] == 1)
            {
                count++;
            }

            if(big<count)
            {
                s=i;
                big = count;
            }
        }
    }
   printf(" maximum no of rows is %d ",s);
}