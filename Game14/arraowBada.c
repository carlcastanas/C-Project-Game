/*

	Arrow Bada

*/

#include<stdio.h>
#include<conio.h>

main(){
       
    int i,j,k;
    for(i=1;i<=11;i++){
		for(j=1;j<=11;j++){
			printf("  ");
            if( j==11 || i==11 || i==j){printf("*");}
			else{printf(" ");}
        } //inner for
    printf("\n");
    } //outer for
    getch();
} //main
