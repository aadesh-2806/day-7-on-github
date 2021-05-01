#include<stdio.h>

void main()
{
	
	int i,a[50][50],t,n,r,s,j;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	s=0;
	t=n;
	
	r=0;
	for(i=1;i<=(n*n);)
	{
		if(i==1)
		{
			j=0;
		}
		for(;j<t;j++)
		{
			a[r][j]=i++;
			if(i==(n*n)+1)
			{
				goto a;
			}
		}
		j--;
		if(i==(n*n)+1)
		{
			break;
		}
		for(r++;r<t;r++)
		{
			a[r][j]=i++;
			if(i==(n*n)+1)
			{
				goto a;
			}
		}
		if(i==(n*n)+1)
		{
			break;
		}
		r--;
		
		for(j--;j>=s;j--)
		{
			a[r][j]=i++;
			if(i==(n*n)+1)
			{
				goto a;
			}
		}
		r--;
		if(i==(n*n)+1)
		{
			break;
		}
		s++;
		for(j++;r>=s;r--)
		{
			a[r][j]=i++;
			if(i==(n*n)+1)
			{
				goto a;
			}
		}
		t--;
		j++;
		r++;
	}
	a:
	for(s=0;s<n;s++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[s][j]);
		}
		printf("\n");
	}
	getch();
	
}	 		
