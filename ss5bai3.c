#include<stdio.h>
		int main(){
			//tao bien va cho nhap vao so nguyen duong
			int number;
			int x;
			int y;
			printf("nhap 1 so nguyen duong bat ki: ");
			scanf("%d", &x);
			//tinh tong tat ca c�c s? t? 1 d?n s? du?c nh?p v� in k?t qu? ra m�n h�nh
			for (y=0;y<=x;y++){
				number = y + number;
			}
			printf("ket qua la :%d",number);
			
			
			return 0;
			
	}
