#include<stdio.h>
#define INF 1000
#define max 100
void WMatrix(int weightMatrix[max][max],int nNode);
void breadthTrav(int weightMatrix[max][max],int visited[],int stack[],int start,int nNode);
int enqueue(int queueArray[],int *rearPosition,int size,int data);
int dequeue(int queueArr[],int*front);
void WMatrix(int weightMatrix[max][max],int nNode)
{
	int i,j;
	printf("enter weights between respective nodes:\n");
	for(i=0;i<nNode;i++)
	{
		for(j=0;j<nNode&&j==i;j++)
		{
			weightMatrix[i][j]=0;		
		}
	}
	for(i=0;i<nNode;i++)
	{
		for(j=0;j<nNode;j++)
		{
			if(i!=j)
			{
				printf("enter weight between nodes %d and %d:",i,j);
				scanf("%d",&weightMatrix[i][j]);
			}		
		}
	}
}
void breadthTrav(int weightMatrix[max][max],int visited[],int queue[],int start,int nNode)
{
	int top=-1,node,i;
	int front=0;
	int rear=0;
	for(i=0;i<nNode;i++)
	{
		visited[i]=0;
	}
	enqueue(queue,&rear,nNode,start);
	visited[start]=1;
	while(front!=rear)
	{
		node=dequeue(queue,&front);
		printf("%d\t",node);
		for(i=0;i<nNode;i++)
		{
			if(weightMatrix[node][i]!=INF)
			{
				if(visited[i]==0)
				{
					visited[i]=1;		
					enqueue(queue,&rear,nNode,i);
				}
			}
		}		
	}
}
int enqueue(int queueArray[],int *rearPosition,int size,int data)
{
	if (*rearPosition==size)
		return 0;
	else
	{
		queueArray[*rearPosition]=data;
		(*rearPosition)++;
		return 1;
	}
}
int dequeue(int queueArr[],int*front)
{
	int data;
	data=queueArr[*front];
	(*front)++;
	return data;
}
int main()
{
	int nNode,startNode;
	printf("enter number of nodes:");
	scanf("%d",&nNode);
	int weightMatrix[nNode][nNode],visitedArr[nNode],queueArr[nNode];
	WMatrix(weightMatrix,nNode);
	printf("enter from where you want to start:");
	scanf("%d",&startNode);
	breadthTrav(weightMatrix,visitedArr,queueArr,startNode,nNode);
}

