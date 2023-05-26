#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<MMsystem.h>
char sq[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void drawboard();
int main()
{
	system("color 1a");
	int player =1,i,choice;
	char mark;//X,O;
	do{
		drawboard();
		player=(player%2)?1:2;
		printf("player %d, enter ur choice:",player);
		scanf("%d",&choice);
		mark=(player==1)?'X':'O';
		if(choice==1 && sq[1]=='1')
		sq[1]=mark;
		else if(choice ==2 && sq[2]=='2')
		sq[2]=mark;
		else if(choice ==3 && sq[3]=='3')
		sq[3]=mark;
		else if(choice ==4 && sq[4]=='4')
		sq[4]=mark;
		else if(choice ==5 && sq[5]=='5')
		sq[5]=mark;
		else if(choice ==6 && sq[6]=='6')
		sq[6]=mark;
		else if(choice ==7 && sq[7]=='7')
		sq[7]=mark;
		else if(choice ==8 && sq[8]=='8')
		sq[8]=mark;
		else if(choice ==9 && sq[9]=='9')
		sq[9]=mark;
		else{
			printf("invalid optopn");
			player--;
			getch();
		}
		i=checkwin();
		player++;
		
	}while(i==-1);
	drawboard();
	if(i==1)
	{
		printf("==> player %d won ",--player);
		
	}
	else
	{
		printf("==> game draw");
	}
	getch();
	return 0;
}
int checkwin()
{
	if(sq[1]==sq[2]&&sq[2]==sq[3])
	 return 1;
	else if (sq[4]==sq[5]&&sq[5]==sq[6])
	return 1;
	else if (sq[7]==sq[8]&&sq[8]==sq[9])
	return 1;
	else if (sq[1]==sq[4]&&sq[4]==sq[7])
	return 1;
	else if (sq[2]==sq[5]&&sq[5]==sq[8])
	return 1;
	else if (sq[3]==sq[6]&&sq[6]==sq[8])
	return 1;
	else if (sq[1]==sq[5]&&sq[5]==sq[9])
	return 1;
	else if (sq[3]==sq[5]&&sq[5]==sq[7])
	return 1;
    else if (sq[1]!='1' && sq[2]!='2'&&sq[3]!='3'&&sq[4]!='4'&&sq[5]!='5'&&sq[6]!='6'&&sq[7]!='7'&&sq[8]!='8'&&sq[9]!='9')
    return 0;
    else
    return -1;
}
void drawboard()
{
	system("cls");
	printf("\n\n tic tac toe \n\n");
	printf("player 1 (X)- player (0)\n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  | %c \n",sq[1],sq[2],sq[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",sq[4],sq[5],sq[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",sq[7],sq[8],sq[9]);
	printf("     |     |     \n");
}
