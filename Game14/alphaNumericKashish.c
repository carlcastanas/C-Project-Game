/*

     An interactive program-for printing Alphabets & Numbers on console

*/


#include<stdio.h>
#include<conio.h>

main(){
       
       //declare some variables
       int a,c,i,j,k;
       char b,z;
   
        do{ 
        
            printf("\n  Enter Letter/Number:-  \a\r"); 
            b=getch(); 
            printf("                       ");
            c=b;
            
            printf("\n\n");
        
            for(i=0;i<=10;i++){
                printf("  ");
                for(j=0;j<=10;j++){
                     
                    switch(c){
                    //Numeric
                    case 48:/*0*/ if(i==0 && j<8 && j>2|| i+j==3 && i<3 ||j-i==8 || i==10 && j<8 && j>2 ||j==1 && i>2 && i<9 || j==10 && i>2 && i<9 ||i+j==18 ||i-j==7 && i>7){k=219;printf("%c",k);}else{printf(" ");};break;
                    case 49:/*1*/ if(j==5 || i==10 && j<8 && j>2 || i+j==5 && i<3){k=219;printf("%c",k);}else{printf(" ");} ;break;
                    case 50:/*2*/ if(i==0 && j<8 && j>2|| i+j==3 && i<2  ||j-i==8 || i==10 && j>2 ||i+j==12 ){k=209;printf("%c",k);}else{printf(" ");} ;break;
                    case 51:/*3*/ if(i==0 && j>1 || i==10 && j>1 ||j==10 ||i==5 && j>1){k=20;printf("%c",k);}else{printf(" ");} ;break;
                    case 52:/*4*/ if(i+j==6 || i==6 && j<9 || j==6 && i>4 ||i==10 && j<8 && j>4){k=172;printf("%c",k);}else{printf(" ");} ;break;
                    case 53:/*5*/ if(i==0 && j<9 ||i+j==18|| j-i==4 && i>4 ||i-j==9 || j==0 && i<5|| i==4 && j<9 ||i==10 && j<8 && j>1 ||j==10 && i>5 && i<9 || j+i==18){k=4;printf("%c",k);}else{printf(" ");} ;break;
                    case 54:/*6*/ if(i==0 && j<9 && j>2||i+j==18|| i+j==2 ||i+j==6 && j<3 || j-i==4 && i>4 ||i-j==9 || j==0 && i<9 && i>2|| i==4 && j<9 && j>2 ||i==10 && j<8 && j>1 ||j==10 && i>5 && i<9 || j+i==18){k=220;printf("%c",k);}else{printf(" ");} ;break;
                    case 55:/*7*/ if( i==0 || i+j==10){printf("%c",k);}else{k=220;printf(" ");} ;break;
                    case 56:/*8*/ if(j==10 || j==0 ||i==5|| i==0 || i==10){k=220;printf("%c",k);}else{printf(" ");} ;break;
                    case 57:/*9*/ if(j==10 || j==0 && i<6 ||i==5|| i==0 || i==10){k=219;printf("%c",k);}else{printf(" ");}  ;break;
                
					//Alphic 
					case 97: /*A*/ if(j==10 || j==0 ||i==6|| i==0 ){k=219;printf("%c",k);}else{printf(" ");} ;break;
					case 98: /*B*/  if(j==10 || j==3 ||i==5 && j>2|| i==0 || i==10){k=220;printf("%c",k);}else{printf(" ");}  ;break;          
					case 99: /*C*/ if(j==10 && i<4 ||j==10 && i>7 || j==0 || i==0 || i==10){ k=155;printf("%c",k);}else{printf(" ");}   ;break; 
					case 100: /*D*/ if(j==10  || j==3 || i==0 || i==10){k=235;printf("%c",k);}else{printf(" ");}  ;break;
					case 101: /*E*/ if( j==0  ||  i==5 || i==10 || i==0){k=228;printf("%c",k);}else{printf(" ");}  ;break;
					case 102: /*F*/ if( i==5 && j<9 || j==0 || i==0 ){k=159;printf("%c",k);}else{printf(" ");}  ;break;
					case 103: /*G*/ if( j==0|| i==5 && j>6 || j==10 && i>4 ||  i==0 ||i==10){k=254;printf("%c",k);}else{printf(" ");}  ;break;
					case 104: /*H*/ if( j==0|| j==10 || i==5  ){k=206;printf("%c",k);}else{printf(" ");}  ;break;
					case 105: /*I*/ if(i==0|| i==10 || j==5  ){k=173;printf("%c",k);}else{printf(" ");} ;break;
					case 106: /*J*/ if(i==0 && j>1 && j<10|| i==10  && j<6 || j==5 || j==0 && i>7 ){k=245;printf("%c",k);}else{printf(" ");}  ;break;
					case 107: /*K*/ if(j==0 || i+j==5|| i-j+1==5 ){k=175;printf("%c",k);}else{printf(" ");}  ;break;
					case 108: /*L*/ if(j==0 || i==10 ){k=156;printf("%c",k);}else{printf(" ");}  ;break;
					case 109: /*M*/ if(j==0 || j==10 || i-j==0 && i<6|| i+j==10 && i<6){k=216;printf("%c",k);}else{printf(" ");}  ;break;
					case 110: /*N*/ if(i==j || j==0 ||j==10 ){k=252;printf("%c",k);}else{printf(" ");}  ;break;
					case 111: /*O*/ if(j==10 || j==0 ||i==10 || i==0 ){k=153;printf("%c",k);}else{printf(" ");}  ;break;
					case 112: /*P*/ if(j==0 || i==0 && j<7 || i==5 && j<7 || j==7 && i<6 ){k=158;printf("%c",k);}else{printf(" ");}  ;break;
					case 113: /*Q*/ if(j==0 && i<8 ||i-j==0 && i>5|| i==0 && j<8 || i==8 && j<8 || j==8 && i<8 ){k=219;printf("%c",k);}else{printf(" ");}  ;break;
					case 114: /*R*/ if(j==0 || i-j==4||i==0 && j<7 || i==5 && j<7 || j==7 && i<6 ){k=209;printf("%c",k);}else{printf(" ");}  ;break; 
					case 115: /*S*/ if(j==0 && i<6 && i>2 || i+j==2|| i==0 && j>2 || j==10 && i>5 && i<9 || i==5 || i+j==18 ||i==10 && j<8 ){k=178;printf("%c",k);}else{printf(" ");}  ;break;
					case 116: /*T*/ if(i==0||j==5 ){k=219;printf("%c",k);}else{printf(" ");}  ;break;
					case 117: /*U*/ if(j==10 || j==0 ||i==10 ){k=230;printf("%c",k);}else{printf(" ");}  ;break;
					case  118: /*V*/ if(i%2==0 && ((j+j)==i || (10 - i/2)==j )){k=3;printf("%c",k);}else{printf(" ");};break;
					case 119: /*W*/ if(i+j== 10 && i>5 || i-j==0 && i>4 ||j==0 ||j==10){k=220;printf("%c",k);}else{printf(" ");}  ;break;
					case 120: /*X*/ if(i-j==0 || i+j==10 ){k=14;printf("%c",k);}else{printf(" ");}  ;break;
					case 121: /*Y*/ if(i-j==0 && i<6|| i+j==10 && i<6 || j==5 && i>4  ){k=157;printf("%c",k);}else{printf(" ");}  ;break;
					case 122: /*Z*/ if(i==0|| i== 10|| i+j==10 ){k=240;printf("%c",k);}else{printf(" ");} ;break;    
                
            
					}//switch completes
                } printf("\n");           
            }//for completes
            
            
            printf("\n  Another Letter:-1.Yes 2.Exit:- \a\r");
            //scanf("%d",&a);
            z=getch();
            a=z;
            printf("                                ");
            
            }// do completes
        
        while(a=='1'); 
        
        getch();
        
} //main
