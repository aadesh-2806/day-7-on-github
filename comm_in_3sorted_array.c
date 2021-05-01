#include<stdio.h>

void main()
{
	
	int i,b[100],a[50][50],s,k,c[100],n,j,t;
	
	printf("hello\n");

	for(i=0;i<3;i++)
	{
		printf("enter number of values for array=");
		scanf("%d",&b[i]);
		
		for(j=0;j<b[i];j++)
		{
			printf("enter %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<b[0];j++)
	{
		k=0;
		for(k=0;k<b[1];k++)
		{
			if(a[0][j]==a[1][k])
			{
				for(t=0;t<b[2];t++)
				{
					if(a[0][j]==a[2][t])
					{
						printf("%d ",a[0][j]);
					}
				}
			}
		}
	}
	
	getch();
	
}
