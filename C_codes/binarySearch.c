// C program to implement recursive Binary Search
#include <stdio.h>

int binarySearch(int arr[], int beg, int end_index, int x)
{
	if (end_index >= beg)
    {
		int mid = (end_index + beg) / 2;
        printf("%d",mid);

		if (arr[mid] == x)
			return mid;

		else if (arr[mid] > x)
			return binarySearch(arr, beg, mid - 1, x);
        else
            return binarySearch(arr, mid + 1, end_index, x);
	}
	return -1;
}

int main(void)
{
    int n,i;
    printf("Size of array:");
    scanf("%d",&n);

	int arr[i];
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
        scanf("%d",&arr[n]);

	int x ;
	printf("Element to be search:");
	scanf("%d",&x);

	int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1)
    {
		 printf("Element is not present in array");
    }
    {
        printf("Element is present at index %d", result);
    }

	return 0;
}
