// insertion sorting //
 #include <stdio.h>
 void insert(int a[], int n)
{
    int i, j, temp;
    for (i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;

        while(j>=0 && temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
void main()
{
    int a[10],i,n;

    printf("enter size of array");
    scanf("%d",&n);

    printf("enter element array elements are - \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    insert(a,n);

    printf("\nAfter sorting array elements are - \n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
