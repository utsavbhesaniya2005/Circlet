#include<stdio.h>
main(){
	
	int i, j, k, c=1;
	char ch;
	
	printf("\n\n\t\t First Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=i; j++){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Second Pattern \n\n");
	
	for(i=5; i>=1; i--){
		
		for(j=1; j<=i; j++){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Third Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=5; j>=6-i; j--){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Fourth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=i; j>=1; j--){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Fifth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=5; j>=i; j--){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Sixth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=6-i; j>=1; j--){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Seventh Pattern \n\n");
	
	for(i=5; i>=1; i--){
		
		for(j=6-i; j<=5; j++){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Eigth Pattern \n\n");
	
	for(i=45; i<50; i++){
		
		for(j=45; j<=i; j++){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Nineth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=i; j++){
			
			printf("%d", i);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Tenth Pattern \n\n");
	
	for(i=5; i>=1; i--){
		
		for(j=1; j<=6-i; j++){
			
			printf("%d", i);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Eleventh Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Twelth Pattern \n\n");
	
	for(i=5; i>=1; i--){
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Thirteenth Pattern \n\n");
	
	for(i=5; i>=1; i--){
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=6-i; j<=5; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t Fourteenth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=6-i; j<=5; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t fifthteenth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=i; j>=1; j--){
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t sixthteenth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=i; j>=1; j--){
			
			printf("%d", j);
		}
		printf("\n");
	}
	for(i=5; i>=1; i--){
		if(i==5){
			continue;
		}
		
		for(j=i; j>=1; j--){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t seventeenth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	for(i=5; i>=1; i--){
		if(i==5){
			continue;
		}
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=6-i; j<=5; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t eigthteenth Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=i; j++){
			
			printf("%d", j);
		}
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=i; j>=1; j--){
			printf("%d", j);
		}
		
		printf("\n");
	}
	
	printf("\n\n\t\t nineteenth Pattern \n\n");
	
	for(i=5; i>=1; i--){
		
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=i; j>=1; j--){
			
			printf("%d", j);
		}
		printf("\n");
	}
	
	for(i=1; i<=5; i++){
		if(i==1){
			continue;
		}
		
		for(j=1; j<=i; j++){
			
			printf("%d", j);
		}
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=i; j>=1; j--){
			printf("%d", j);
		}
		
		printf("\n");
	}
	
	printf("\n\n\t\t twentynth Pattern \n\n");
	
    for(i=1; i<=4; i++){
		
		for(k=1; k<5-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			
			if(j==1){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		
		
		for(j=i; j>=2; j--){
			
			if(j==2){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		
		printf("\n");
	} 
	
	printf("\n\n\t\t twenty-one Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=i; j++){
			
			printf("%d ", c);
			c++;
		}
		printf("\n");
	}
	
	printf("\n\n\t\t twenty-two Pattern \n\n");
	
	for(ch='A'; ch<='E'; ch++){
		
		for(j='A'; j<=ch; j++){
			
			printf("%c", ch);
		}
		printf("\n");
	}
	
	printf("\n\n\t\t twenty-three Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=i; j++){
			
			if(j%2==0){
				printf("0 ");
			}else{
				printf("1 ");
			}
			
		}
		printf("\n");
	}
	
	printf("\n\n\t\t twenty-four Pattern \n\n");
	
	for(i=1; i<=5; i++){
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=5; j>=6-i; j--){
			printf("%d", j);
		}
		
		for(j=6-i; j<=5; j++){
			if(j==1){
				continue;
			}else if(i==4 && j==2){
				continue;
			}else if(i==3 && j==3){
				continue;
			}else if(i==2 && j==4){
				continue;
			}else if(i==1 && j==5){
				continue;
			}else{
				printf("%d", j);
			}
			
		}
		
		printf("\n");
	}  
	
}