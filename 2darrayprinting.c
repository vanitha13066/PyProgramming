#include<stdio.h>
void readar(int a[][50],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void printar(int a[][50],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n,m;
	printf("Enter rows size:");
	scanf("%d",&n);
	printf("Enter column size:");
	scanf("%d",&m);
	int a[n][m];
	readar(a,n,m);
	printar(a,n,m);
	return 0;
}

