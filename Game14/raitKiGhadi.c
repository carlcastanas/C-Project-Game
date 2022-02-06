/*

	Rait ki Ghadi

*/

#include<stdio.h>
#include<conio.h>

main(){
	
	int i,j,k;
    printf("\n");
	
	for(i=1;i<=11;i++){
		for(j=1;j<=11;j++){
			printf("");
			if( i==j || i==1  || i==11 || (i+j)==12 ||j==6 && i>8){printf("*");}
			else{printf(" ");}
		} //inner for
    printf("\n");
    } //outer for
    
	getch();
} //main
