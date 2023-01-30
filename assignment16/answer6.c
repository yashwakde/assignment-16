#include<stdio.h>
int main()
{
    int a[3][3] ={1,2,3,4,5,6,7,8,9};
    
    int i,j,row[10],column[10];
      for(i=0;i<3;i++)
    {   row[i] = 0;
        for(j=0;j<3;j++)
        {
           row[i] = row[i]+a[i][j];
        }
      
    } 
    for(i=0;i<3;i++)
    {  column[i] = 0;
        for(j=0;j<3;j++)
        {
           column [i]= column[i] +a[j][i];   
        }
    }
    
  
     for(i=0;i<3;i++)
    {   
           printf(" sum of row = %d\n",row[i]);
    }
    
        for(j=0;j<3;j++)
        {
            printf("sum of column = %d\n",column[j]);
          
        }
    
     
     
    return 0;
}