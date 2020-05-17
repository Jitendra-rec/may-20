#include<stdio.h>
 char a[9]={'1','2','3','4','5','6','7','8','9'};
 int b=0,d=0;
void show (void);
void start(void);
void show()
{ system("cls");
 if(b<9)
    start();
    printf("\n\t\t    |    |      ");
	printf("\n\t\t  %c |  %c |  %c  ",a[0],a[1],a[2]);
	printf("\n\t\t =============");
    printf("\n\t\t    |    |      ");
	printf("\n\t\t  %c |  %c |  %c  ",a[3],a[4],a[5]);
	printf("\n\t\t =============");
    printf("\n\t\t    |    |      ");
	printf("\n\t\t  %c |  %c |  %c  ",a[6],a[7],a[8]);
		if(d==0)
		printf("\n\n\nFIRST(X) PLAYER TURN==> ");
		else 
		printf("\n\n\nSECOND(O) PLAYER TURN==>");
   
}
void start()
{
	printf("\n\n\n\t\t WELCOME TO TIC TAK GAME");
		printf("\n\n\t\t FIRST PLAYER ==: X");
		printf("\n\t\t SECOND PLAYER==: O\n\n\n");
	
		}
	void get()
	{ int c;
	scanf("%d",&c);
	//system("cls");
	show();
	if(a[c-1]==48+c)
	{if(d==0)
	{a[c-1]='X';d=1;
	}else
	{a[c-1]='O';d=0;
		
	}
		
	b++;
	}}
	int check(char q)
	{
		if(a[0]==q&&a[1]==q&&a[2]==q)
		return 1;
		if(a[1]==q&&a[3]==q&&a[6]==q)
		return 1;if(a[1]==q&&a[4]==q&&a[7]==q)
		return 1;if(a[2]==q&&a[5]==q&&a[8]==q)
		return 1;if(a[3]==q&&a[4]==q&&a[5]==q)
		return 1;if(a[7]==q&&a[7]==q&&a[8]==q)
		return 1;if(a[0]==q&&a[4]==q&&a[8]==q)
		return 1;
		if(a[2]==q&&a[4]==q&&a[6]==q)
		return 1;
	}
main()
{ 
 int i;
while(b<9){
	show();
	get();
	if(check('X')==1){	system("cls");
	printf("\n\n\n\t\tplayer 1 won\n\n\n");
	b=50; break;}
	
	if(check('O')==1){	b=50;system("cls");
	printf("\n\n\n\t\tplayer 2 won\n\n\n"); break;}
	}
	if(b!=50){system("cls");
	printf("\n\n\t\t GAME DRAW");}
char ab;
ab=getch();
if(ab=='y')
printf("u want to restart");
printf("%c",ab);
getch();
}
