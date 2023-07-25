#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

char box[10]="o123456789";

void drawboard(){
 system("cls");
 printf("\n\n\tTIC TAC TOE\n\n");
 printf("PLAYER1(X) - PLAYER2(O)\n\n\n");
 printf("   |   |   \n");
 printf(" %c | %c | %c \n",box[1],box[2],box[3]);
 printf("___|___|___\n");
 printf("   |   |   \n");
 printf(" %c | %c | %c \n",box[4],box[5],box[6]);
 printf("___|___|___\n");
 printf("   |   |   \n");
 printf(" %c | %c | %c \n",box[7],box[8],box[9]);
 printf("   |   |   \n");
  
}
int checkwin(){
	if(box[1]==box[2]&&box[2]==box[3])
	return 1;
	else if(box[4]==box[5]&&box[5]==box[6])
	return 1;
    else if(box[7]==box[8]&&box[8]==box[9])
	return 1;
	else if(box[1]==box[4]&&box[4]==box[7])
	return 1;
	else if(box[2]==box[5]&&box[5]==box[8])
	return 1;
	else if(box[3]==box[6]&&box[6]==box[9])
	return 1;
	else if(box[1]==box[5]&&box[5]==box[9])
	return 1;
	else if(box[3]==box[5]&&box[5]==box[7])
	return 1;
	else if(box[1]!='1'&&box[2]!='2'&&box[3]!='3'&&box[4]!='4'&&box[5]!='5'&&box[6]!='6'&&box[7]!='7'&&box[8]!='8'&&box[9]!='9')
	return 0;
	else{
		return -1;
	}
}

int main(){
	system("color 4f");
	int player=1,i,choice;
	char mark;
	do{	
     drawboard();
     player=(player%2)?1:2;
     printf("Player%d,enter the choice:",player);
     scanf("%d",&choice);
     mark=(player==1)?'X':'O';
     if(choice==1&&box[1]=='1')
     box[1]=mark;
     else if(choice==2&&box[2]=='2')
     box[2]=mark;
     else if(choice==3&&box[3]=='3')
     box[3]=mark;
     else if(choice==4&&box[4]=='4')
     box[4]=mark;
     else if(choice==5&&box[5]=='5')
     box[5]=mark;
     else if(choice==6&&box[6]=='6')
     box[6]=mark;
     else if(choice==7&&box[7]=='7')
     box[7]=mark;
     else if(choice==8&&box[8]=='8')
     box[8]=mark;
     else if(choice==9&&box[9]=='9')
     box[9]=mark;
     else{
     	printf("Invalid option!\n");
     	player--;
     
	 }
	 i=checkwin();
	 player++;
    
}while(i==-1);
drawboard();
if(i==1){
	printf("PLAYER%d WON!!",--player);
}
  else{
  	printf("GAME DRAW!!\n");
  }
    getch();
	return 0;
}
