/*

	NACO
	National Aids corporation Organisation

*/

#include<stdio.h>
#include<conio.h>

main(){
	
	int i,j,l=209;
    
	printf("\n\n");
    
	for(i=0;i<=10;i++){
		printf("  ");
		
		for(j=0;j<=10;j++){
			if(i==0 && j<8 && j>2|| i+j==3 && i<2  ||j-i==8  ||i+j==12  || i-j==0 && i>1){
			printf("%c",l);
			}else{printf(" ");}
        } //inner for
		
    printf("\n");
    } //outer for
	
	getch();
} //main
