#include<stdio.h>
		int main(){
			//tao bien co gia tri cho trc va 1 bien answer
			int number = 2006;
			int answer;
			//tao vong lap cho ng dung nhap gia tri tu ban phim cho den khi so dc nhap trung voi gia tri dc cho trc thi dung
			while (answer != number){
				printf(" moi ban nhap so can tim: ");
				scanf("%d", &answer);
					if (answer == number){
						printf("cau tra loi chinh xac");
					}
			}
			return 0;
	}
