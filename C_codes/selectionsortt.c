//selection sort
#include<stdio.h>
#include<stdlib.h>

int selectionsort(int a[],int min)
{
    int n,i,j,temp;
	for(i=0;i<n-1;i++)
	{
		int min=i;
        for(j=i+1;j<n;j++)
		{
		 	if(a[min]>a[j])
                min=j;
        }
	}
    temp=a[min];
    a[min]=a[i];
	a[i]=temp;
}
int main()
{
	int n,i,j;
	printf("enter the size of array:");
	scanf("%d",&n);

	int a[n];
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	selectionsort(a,n);

	for(i=1;i<=n;i++)
	{
		 printf("%d\t",a[i]);
	}
	return 0;
}
