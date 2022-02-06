/*

	K- Dil se

*/

#include <stdio.h>
#include <conio.h>


main(){
      
	int x,y,z=3;
    
	for(x=0;x<10;x++){
		for(y=10;y>x;y--){
			printf("%c",z);  
        } //inner for-1
    printf("\n");
    }  //outer for-1
            
    for(x=1;x<=10;x++){
	    for(y=0;y<x;y++){
			printf("%c",z);
        } //inner for-2      
    printf("\n");
    } //outer for-2
	getch();
       
} //main
