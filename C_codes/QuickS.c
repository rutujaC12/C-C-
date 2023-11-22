//Quick Sort
#include<stdio.h>
#include<string.h>
void quickSort(int num[],int first,int last)
{
    int temp,i,j,pivot;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(num[i]<=num[pivot] && i<last)
                i++;
            while(num[j]>num[pivot])
                j--;
            if(i<j)
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
        temp=num[pivot];
        num[pivot]=num[j];
        num[j]=temp;
        quickSort(num,first,j-1);
        quickSort(num,j+1,last);
    }
}
int main()
{
    int i,count,num[25];
    printf("Enter the count:");
    scanf("%d",&count);

    printf("Enter %d Elements:",count);
    for(i=0;i<count;i++)
        scanf("%d",&num[i]);

    quickSort(num,0,count-1);

    printf("Sorted Elements are:");
    for(i=0;i<count;i++)
        printf("%d ",num[i]);
    return 0;
}
