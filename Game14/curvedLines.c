/*

	Curved Lines

*/

#include<stdio.h>
#include<conio.h>

main(){
	int i,j,k,l=22;
    
	for(i=0;i<=20;i++){
		for(j=0,k=20;j<=20;j++,k--){
			
			if(i==j){printf("    ");}
            else{printf(" ");}
            if(j==k-i){printf("*");}
            if(i+j>15||i+j<6){printf("  ");}
			
        } //inner for
                  
		printf("\n");
    } //outer for
	
	getch();
}
