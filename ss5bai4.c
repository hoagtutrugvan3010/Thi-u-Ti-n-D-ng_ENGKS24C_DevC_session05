#include<stdio.h>
		int main(){
			//nhap vao 1 so tu 1 - 10 bat ki
			int a;
			int b;
			int c;
			printf("moi ban nhap 1 so tu 1-10:");
			scanf("%d", &a);
			//in ra bang cuu truong cua so do 
			for (b=0;b<=10;b++){
				c = a * b;
				printf("%d * %d = %d\n",a,b,c);
				
			}
				return 0;
			
	}
