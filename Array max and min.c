#include<stdio.h>

int main()
{
    int x[10],min,max,i;
    printf("Enter no.=");
    for (i=0;i<10;i++)
    {
    scanf("%d",&x[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(max<x[i])
          {
             max=x[i];
          }
        if(min>x[i])
          {
             min=x[i];
          }
    }
    
     printf("Max no.=%d\n",max);
     printf("Min no.=%d",min);
    return 0;
}
