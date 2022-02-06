/*

	MailBox

*/

#include<stdio.h>
#include<conio.h>

main(){
	
	int i,j,k;
		for(i=1;i<=11;i++){
			for(j=1;j<=11;j++){
				printf(" ");
                if(j==1 || i==j && i<7 || i==1 || j==11 || i==11 || (i+j)==12 && i<7){printf("*");}
                else{printf(" ");}
            } //inner for
			printf("\n");
		} //outer for
	getch();
} //main

	
