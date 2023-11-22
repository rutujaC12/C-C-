//Insertion Sort
#include<stdio.h>
#define M 5
void main()
{
    int x[M],val,i,j;
    for(i=0;i<M;i++)
    {
        printf("\nEnter data");
        scanf("%d",&val);
        for(j=i-1;j>=0;j++)
        {
            if(x[j]>val)
                x[j+1]=x[j];
            else
                break;
        }
        x[j+1]=val;
    }
    printf("\nData\n");
    for(i=0;i<M;i++)
        printf("%4d",x[i]);
    return;
}
