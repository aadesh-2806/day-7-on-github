#include<stdio.h>
#include<conio.h>

int main()
{
	int a=5,b=10,c=6; 
	//clrscr();
	//a=(3,7,5);
	//a=3,7,5;
	(a>b)?(a>c?printf("%d bada hai",a):printf("%d bada hai",c))
	:(b>c?printf("%d bada hai",b):printf("%d bada hai",c));
	//printf("%d %d", a,b);
	return 0;
}
