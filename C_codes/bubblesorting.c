//bubble sorting
#include<stdio.h>
void bubbleSort(int a[],int n)
{
    int i,t,temp;
    for(t=0;t<n;t++)
	{
		for(i=0;i<n;i++)
        {
            if (a[i]>a[i+1])
			{
                temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
        }
	}
}
int main()
{
	int a[20],i,n,t,temp;
	printf("total no.s:");
	scanf("%d",&n);

	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}

	bubbleSort(a,n);

	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
