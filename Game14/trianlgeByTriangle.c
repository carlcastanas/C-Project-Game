/*

	Triangle by Triangle

*/

#include <stdio.h>
#include <conio.h>

main(){
    
	char onelove [33]="HARAMI";
	int x,y;
	for(x=0;x<6;x++){
		for(y=0;y<=x;y++){
			printf("%c",onelove);
        } //inner for
	printf("\n");
	} //outer for
	getch ();
} //main
