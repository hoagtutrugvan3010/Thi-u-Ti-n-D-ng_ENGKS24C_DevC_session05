#include<stdio.h>

	int main(){
		int a;
		int b;
		int c;
		int d;
		printf("nhap so nguyen bat ki: ");
		scanf("%d", &a);
		printf("nhap so nguyen bat ki: ");
		scanf("%d", &b);
		
		while (d!=5){
			printf("CALCULATOR\n 1. tong 2 so\n 2. hieu 2 so\n 3. tich 2 so\n 4. thuong 2 so\n 5. thoat\n");
			scanf("%d",&d);
			 if (d=1){
			 	c=a+b;
			 	printf("tong cua %d va %d la: %d\n",a,b,c);
			 }
			printf("CALCULATOR\n 1. tong 2 so\n 2. hieu 2 so\n 3. tich 2 so\n 4. thuong 2 so\n 5. thoat\n");
			scanf("%d",&d);
			 if (d=2){
			 	c=a-b;
			 	printf("hieu cua %d va %d la: %d\n",a,b,c);
			 }
			printf("CALCULATOR\n 1. tong 2 so\n 2. hieu 2 so\n 3. tich 2 so\n 4. thuong 2 so\n 5. thoat\n");
			scanf("%d",&d);
			 if (d=3){
			 	c=a*b;
			 	printf("tich cua %d va %d la: %d\n",a,b,c);
			 }
			printf("CALCULATOR\n 1. tong 2 so\n 2. hieu 2 so\n 3. tich 2 so\n 4. thuong 2 so\n 5. thoat\n");
			scanf("%d",&d);
			 if (d=4){
			 	c=a/b;
			 	printf("thuong cua %d va %d la: %d\n",a,b,c);
			 }
			printf("CALCULATOR\n 1. tong 2 so\n 2. hieu 2 so\n 3. tich 2 so\n 4. thuong 2 so\n 5. thoat\n");
			scanf("%d",&d);
			 if (d=5){
			 	printf("ket thuc");
			 }
		
			 }
			 
			 return 0;
}
	
