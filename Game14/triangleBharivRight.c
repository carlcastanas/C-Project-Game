/*

	Triangle Bhariv- Right

*/

#include<stdio.h>
#include<conio.h>

main(){
	
	int i,j,k;
    for(i=0;i<=10;i++){
		for(j=0;j<=10;j++){
			if((i+j)>=10 ){printf("*");}
            else{printf(" ");}
        } //inner for
	printf("\n");
    }//outer  for
	getch();
} //main
