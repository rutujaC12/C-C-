#include<stdio.h>
#include<stdlib.h>
#define M 10
int list[M];
void insert(int ele)
{
    int i,k,f=0;
    i=ele%M;
    int l=M;
    while(l--)
    {
        if(list[i]==-1)
        {
            list[i]=ele;
            f=1;
            break;
        }
        else
            i=(i+1)%M;
    }
    if(f==0)
    {
		printf("\n Array is full \n ");
	}

    for(k=0;k<M;k++)
    {
       	printf("%d\n",list[k]);
    }

}
void search(int ele)
{
    int i,l,f=0;
    i=ele%M;
    while(l--)
    {
        if(list[i]==-1)
        {
            printf("Element is at location:%d",i);
            f=1;
            break;
        }
        else
            i=(i+1)%M;
    }
    if(f==0)
    {
        printf("Element not found");
    }
}
int main()
{
     int k, ele,opt;
    for(k=0;k<M;k++)
    	{
        	list[k]=-1;
        	printf("%d\n",list[k]);
		}
    while(1)
    {
    	printf("1.Insert\n 2.Search\n 3.Exit\n option:");
    	scanf("%d",&opt);

    	switch(opt)
    	{
    		case 1:
    		{
    			printf("Data:");
				scanf("%d",&ele);
    			insert(ele);
    		}
    			break;

    		case 2:
    		{
    			printf("Data to search:");
    			scanf("%d",&ele);
    			search(ele);
    		}
    			break;
    		case 3:
    			exit(1);
    			default:
    			printf("Wrong Choice");
    	}
    }
    return 0;
}
