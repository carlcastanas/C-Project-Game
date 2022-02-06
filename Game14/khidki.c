/*

	Khidki

*/

#include<stdio.h>
#include<conio.h>

main(){
	
	int i,j,k=3;
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				if(  (j+i)>12 || (j+i)<5  ) { printf("*");}  else{ printf(" ");}  
			} //inner for
		printf("\n");                  
        } //outer for
	getch();
} //main






