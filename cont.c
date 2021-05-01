#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	//clrscr();
	//scanf("%d", &n);
	n=5;
	for(i=1; i<=n; i=i+1)
	{
		if(i==3)
			continue;
		printf("%d", i);
	}
	getch();

}
