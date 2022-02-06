/*

	Blank Zopdi

*/

#include<stdio.h>
#include<conio.h>

main(){
	
	int i,j,k=6;
    for(i=0;i<20;i++){
		for(j=0,k;j<20;j++,k++){
			if(i+j==10 && i<10 /*left tirpa*/ || j-i==9 && i<10/* right tirpa*/ ||  j==1 && i>10 || j==18 && i>10/* ubhi*/ ||  i==10 && j>0 && j<19 || i==19 && j>0 && j<19 /* aadva*/   ){
			printf("*");
			}else{printf(" ");}
		} //inner for
        printf("\n");
    } //outer for

	getch();
} //main
