/*

	Tirpa-V

*/

#include<stdio.h>
#include<conio.h>

main(){
       
    int i,j,k;
    for(i=0;i<=20;i++){
		for(j=0,k=20;j<=20;j++,k-2){
			if(i==j){printf("*");}else{printf(" ");
			if(j==k){printf("*");}}
		} //inner for
	printf("\n");
    } //outer for
	getch();
} //main
