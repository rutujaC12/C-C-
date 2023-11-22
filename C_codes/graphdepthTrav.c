#include<stdio.h>
#define INF 1000
#define max 100
void WMatrix(int weightMatrix[max][max],int nNode);
void depthTrav(int weightMatrix[max][max],int visited[],int stack[],int start,int nNode);
int push(int star[],int *stTop,int stSize,int data);
int isEmpty(int top);
int pop(int stackArray[],int *stop);
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
void depthTrav(int weightMatrix[max][max],int visited[],int stack[],int start,int nNode)
{
	int top=-1,node,i;
	for(i=0;i<nNode;i++)
	{
		visited[i]=0;
	}
	push(stack,&top,nNode,start);
	visited[start]=1;
	while(!isEmpty(top))
	{
		node=pop(stack,&top);
		printf("%d\t",node);
		for(i=0;i<nNode;i++)
		{
			if(weightMatrix[node][i]!=INF)
			{
				if(visited[i]==0)
				{
					visited[i]=1;		
					push(stack,&top,nNode,i);
				}
			}
		}		
	}
}
int isEmpty(int top)
{
	if (top==-1)
		return 1;
	else
		return 0;
}
int push(int star[],int *stTop,int stSize,int data)
{
	if (*stTop>=stSize)
		return 0;
	else
	{
		(*stTop)++;
		star[*stTop]=data;
		return 1;
	}
}
int pop(int stackArray[],int *sTop)
{
	(*sTop)--;
	return stackArray[*sTop+1];
}
int main()
{
	int nNode,startNode;
	printf("enter number of nodes:");
	scanf("%d",&nNode);
	int weightMatrix[nNode][nNode],visitedArr[nNode],stackArr[nNode];
	WMatrix(weightMatrix,nNode);
	printf("enter from where you want to start:");
	scanf("%d",&startNode);
	depthTrav(weightMatrix,visitedArr,stackArr,startNode,nNode);
}

