#include<stdio.h>

	int main(){
		int firstNumber,secondNumber;
			printf("moi nhap so nguyen duong thu nhat: ");
			scanf("%d",&firstNumber);
			printf("moi nhap so nguyen duong thu hai: ");
			scanf("%d",&secondNumber);
	
		int mod=1;
		int check=0;
	
	
		while(check==0){
			if (firstNumber>secondNumber){
				 mod=firstNumber%secondNumber;
			if(mod==0){
		 		printf("UCLN la %d", secondNumber);
		 		check=1;
		 	}else{
		 	
		 		firstNumber=secondNumber;
		 		secondNumber=mod;
	}
			}else if(firstNumber<secondNumber){
		 		mod=secondNumber%firstNumber;
		 			if(mod==0){
		 				printf("UCLN la %d", secondNumber);
		 				check=1;
		 	}else{
		 	 
		  		secondNumber=firstNumber;
		  		secondNumber=mod;
		}

		}
		}				 		 
   			return 0;
	}

