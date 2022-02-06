/*

	Blank Triangle- Left

*/

#include<stdio.h>
#include<conio.h>


//prints N

main(){
	
	int i,j;
    
	for(i=1;i<=10;i++){
		
		for(j=1;j<=10;j++){
			if(i==j || j==1 ||i==10 ){
            printf("*");}
			else{printf(" ");}
			
        } //inner for
    printf("\n");
    } //outer for
	
    getch();
	
} //main
