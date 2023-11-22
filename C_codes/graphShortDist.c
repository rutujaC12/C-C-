#include<stdio.h>
#define INFINITY 1000
#define max 100
void WMatrix(int weightMatrix[][max],int nNode);
int warshalls(int weightMatrix[][max],int nNode);
int min(int a,int b);
void WMatrix(int weightMatrix[][max],int nNode)
{
	int i,j;
	printf("enter weights between respective nodes:\n");
	for(i=0;i<nNode;i++)
	{
		for(j=0;j<nNode;j++)
		{
			weightMatrix[i][j]=INFINITY;		
		}
	}	
	for(i=0;i<nNode;i++)
	{
		for(j=0;j<nNode;j++)
		{
			if (j==i)
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
int warshalls(int weightMatrix[][max],int nNode)
{
	int i,j,s,d,repeat;
	int p[nNode][nNode];
	for(i=0;i<nNode;i++)
	{
		for(j=0;j<nNode;j++)
		{
			p[i][j]=weightMatrix[i][j];
		}
	}
	for(repeat=0;repeat<nNode;repeat++)
	{
		for(i=0;i<nNode;i++)
		{
			for(s=0;s<nNode;s++)
			{
				for(d=0;d<nNode;d++)	
				{
					if(i!=s&&i!=d)
					{
						p[s][d]=min(p[s][d],p[s][i]+p[i][d]);
					}
				}
			}
		}	
	}
	for(i=0;i<nNode;i++)
	{
		for(j=0;j<nNode;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int main()
{
	int nNode,startNode;
	printf("enter number of nodes:");
	scanf("%d",&nNode);
	int weightMatrix[nNode][nNode];
	WMatrix(weightMatrix,nNode);
	printf("enter from where you want to start:");
	scanf("%d",&startNode);
	warshalls(weightMatrix,nNode);
}

