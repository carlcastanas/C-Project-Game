/*

	An interactive program showing How ATM transaction done using C-language

*/

#include<stdio.h>
#include<conio.h>

int main(){
    
    int a,b,c,e,d,g,z;
    
    printf("                            WELCOME  TO  HARAMI KA MAAL.BANK ...... \n\n");
    printf("Please insert your card here \n & \nEnter the PIN NO.:-\a");
    //printf("Enter the PIN NO.:-");
    scanf("%d",&a);
    if(a<=9999){
		printf("\n                     Hello Mr. 420  Bikariwala.\n\n1.Saving A/C\n2.Current A/C\a\n");
        scanf("%d",&c);
        
		// while(c>2);
        
	do{
		if(c==1 || c==2){
			printf("\a\nWhat u want to do ?\n\n 0.Fash Cash\n 1.Cash Withdrawal\n 2.Balance Enquiry\n 3.Mini Statement\n");
            scanf("%d",&d);
            switch(d){
				case 0:printf("\a1.1000\n2.2000\n3.5000\n");scanf("%d",&e);printf("\n\aconnecting to World Bank server .....\n\n");break;
                case 1:scanf("Your Money is:- %d",&z);printf("\aconnecting to World Bank server .....\n\n");break;
                case 2:printf("\n\aJust loading....Please wait....\n");break;
                case 3:printf("\n\aYour balance is:- (%d)\n",a-9999);break;   }
            } //switch -1
                        
            printf("Do u want to continue...1.Yes / 2.No\n");
            scanf("%d",&d);}
            while(d==1);
                
            switch(d){            
				case 2:printf("\a\nYou are logging out ....\n");break;
			}//switch-2
    } else {
		printf("\n\nBhikari are not Allowed....\n");
	}
  
    getch();
    
} //main
