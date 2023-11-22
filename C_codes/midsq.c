//    ----  hashing  (midsquare) ----

#include<stdio.h>
#define M 100		// size should be =< 81 (cause 9^2 = 81) ----
int no[10];
int main()
{
	int arr[M];
	int key;
	int i,k,l=M,f=0,ch,temp;
	// assigning -1
		for(i=0;i<M;i++)
		{
			arr[i]=-1;
		}
	while(1)
	{
		printf(" 1.Enter no \n 2.Display \n 3.search \n 4.Exit \n Choose: ");
		scanf("%d",&ch);
		switch(ch)
		{
			// Entering key in array ----
			case 1:

				printf("Enter no: ");
				scanf("%d",&key);

				//midsquare to get index
				temp=key;
				i=0;
				while(temp!=0)
				{
					no[i]=temp%10;
					temp=temp/10;
					i=i+1;
				}
				i=i/2;
				i=no[i]*no[i];
				//printf("\n Index to store at : %d \n",i);

				f=0;
				k=M;
				// probing (in case of collision)---
				while(k--)
				{
					if(arr[i]==-1)
					{
						arr[i]=key;
						f=1;
						break;
					}
					else
					i=(i+1)%l;
				}
				if(f==0)
				{
					printf("\n Array is full \n ");
				}

				break;

			//display---
			case 2 :

				//printing array
				for(i=0;i<M;i++)
				{
					if(arr[i]==-1)			// to not print vacant spots ---
					continue;
				printf("%d. %d \n",i,arr[i]);
				}
				break;

			//searching ------
			case 3 :
			{
				printf("\nEnter no to search: ");
				scanf("%d",&key);

				//midsquare to get index key in array
				temp=key;
				i=0;
				while(temp!=0)
				{
					no[i]=temp%10;
					temp=temp/10;
					i=i+1;
				}
				i=i/2;
				i=no[i]*no[i];
				//
				k=M;
				f=0;
				while(k--)
				{
					if(arr[i]==key)
					{
						//arr[i]=key;
						printf("%d element found at index %d\n",key,i);
						f=1;
						break;
					}
					else
					i=(i+1)%l;
				}
				if(f==0)
				{
					printf("\n no not present in list \n ");
				}
				break;
			}

			// exit---
			case 4 :
			{
			printf("\n  Process complete  \n");
			return 0;
			}
		}
	}

	return 0;
}
