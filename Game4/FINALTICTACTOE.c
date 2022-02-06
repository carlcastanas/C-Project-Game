#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

char location[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char slot[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int loc[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int a;

	
int check(){
	if(slot[1]==slot[2] && slot[2]==slot[3] && slot[1] != ' ' ){
        return 1;
    }
	else if(slot[4]==slot[5] && slot[5]==slot[6] && slot[4] != ' '){
        return 1;
    }
	else if(slot[7]==slot[8] && slot[8]==slot[9] && slot[7] != ' '){
        return 1;
    }
	else if(slot[1]==slot[4] && slot[4]==slot[7] && slot[1] != ' '){
        return 1;
    }
	else if(slot[2]==slot[5] && slot[5]==slot[8] && slot[2] != ' '){
        return 1;
    }
	else if(slot[3]==slot[6] && slot[6]==slot[9] && slot[3] != ' '){
        return 1;
    }
	else if(slot[1]==slot[5] && slot[5]==slot[9] && slot[1] != ' '){
        return 1;
    }
	else if(slot[3]==slot[5] && slot[5]==slot[7] && slot[3] != ' '){
        return 1;
    }
	else if(slot[1]!=' ' && slot[2]!=' ' && slot[3]!=' ' && slot[4]!=' ' && slot[5]!=' ' && slot[6]!=' ' && slot[7]!=' ' && slot[8]!=' ' && slot[9]!=' '){
        return 0;
    }
	else {
        return -1;
    }

}	

void board(){
	printf("\t\t\t     TIC-TAC-TOE\n");
    printf("\t\t\t     Player-1==>X\n");
    printf("\t\t\t     Player-2==>O\n\n");
    printf("\t\t\t    %c  |  %c  |  %c \n", slot[7], slot[8], slot[9]);
    printf("\n\t\t\t    %c  |  %c  |  %c \n", location[7], location[8], location[9]);
	printf("\t\t\t  ----- ----- -----\n");
    printf("\t\t\t    %c  |  %c  |  %c \n", slot[4], slot[5],slot[6]);
    printf("\n\t\t\t    %c  |  %c  |  %c \n", location[4], location[5], location[6]);
    printf("\t\t\t  ----- ----- -----\n");
    printf("\t\t\t       |     |      \n");
    printf("\t\t\t    %c  |  %c  |  %c \n", slot[1], slot[2],slot[3]);
    printf("\t\t\t    %c  |  %c  |  %c \n", location[1], location[2], location[3]);
}

int main(){
	int cursor = 5;
	char icon;
	int player = 1;
	int ch;
	
	while(1){
		location[cursor] = '-';
		board();
		
		
		
			while(1){
	
	
	int ch;
	 
		
		getch();
		a = getch();
	
	if(a == 72){
		if(cursor!=7 && cursor!=8 && cursor!=9)
				cursor = cursor + 3; 
	
	}
	else if(a == 80){
			if(cursor!=1 && cursor!=2 && cursor!=3){
				cursor = cursor - 3;
	
	
	}}
	else if(a == 75){
			if(cursor!=7 && cursor!=4 && cursor!=1){
				cursor = cursor - 1;
			}
		}
	else if(a == 77){
			if(cursor!=9 && cursor!=6 && cursor!=3){
				cursor = cursor + 1; 
			}
		}
	else if(a == 13){
			
		
			if(player == 1 && slot[cursor] == ' '){
				icon = 'X';
				slot[cursor] = icon;
				ch = check();
				if(ch == 1){
					system("@cls||clear");
					board();
					printf("\n\n\t\t\t   PLAYER-%d WINS", player);break;
					}
				else if(ch == 0){
					system("@cls||clear");
					board();
					printf("\n\n\t\t\t   GAME DRAWS"); break;
					}
				else{
					player = 2;
				}
				
			}
			else if(player == 2 && slot[cursor] == ' '){
				icon = 'O';
				slot[cursor] = icon;
				ch = check();
				if(ch == 1){
					system("@cls||clear");
					board();
					printf("\n\n\t\t\t   PLAYER-%d WINS", player); break;
				}
				else if(ch == 0){
					system("@cls||clear");
					board();
					printf("\n\n\t\t\   GAME DRAWS"); break; 
				}
				else{
					player = 1;
				}
				
			}
			
			}
		
		location[1] = ' ', location[2] = ' ', location[3] = ' ',location[4] = ' ', location[5] = ' ', location[6] = ' ',location[7] = ' ', location[8] = ' ', location[9] = ' ';
		location[cursor] = '-';
		system("@cls||clear");
		board();
		
	}
		break;
		
		}
		
	}
