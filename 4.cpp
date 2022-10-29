#include<stdio.h>
#include<conio.h>
main()
{
	int p1,p2;
	printf("player1 pick\n");
	scanf("%d",&p1);
	printf("player2 pick\n");
	scanf("%d",&p2);
	if (p1==p2)
		printf("equal\n",p1,p2);
	else if ((p1==1)&&(p2==3))
		printf("player1wins\n",p1,p2);		
	else if ((p1==1)&&(p2==2))
		printf("player2wins\n",p1,p2);
	else if ((p1==2)&&(p2==1))
		printf("player1wins\n",p1,p2);
	else if ((p1==2)&&(p2==3))
		printf("player2wins\n",p1,p2);	
	else if ((p1==3)&&(p2==1))
		printf("player2wins\n",p1,p2);	
	else 
		printf("player1wins\n",p1,p2);
	getch();
	return 0;															
}
