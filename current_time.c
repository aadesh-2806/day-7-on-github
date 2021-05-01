#include<stdio.h>
#include<time.h>
void main()
{
	time_t ct;
	
	time(&ct);
	printf("current_time %s",ctime(&ct));
	
	getch();
	
}	 		
