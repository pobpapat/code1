#include<stdio.h>
#include<conio.h>
main()
{
	int x,m=60,h=3600;
	int hours,minutes,seconds;
	printf("enter number of seconds:");
	scanf("%d",&x);
	hours=x/h;
	minutes=x%h/m;
	seconds=x%m;
	printf("%d seconds are equal to ",x);
	printf(" %d hours",hours);
	printf(" %d minutes",minutes);
	printf(" %d seconds",seconds);
	getch();
	return 0;
}
