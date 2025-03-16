#include<stdio.h>

int main(){
	float x;
	scanf("%f", &x);
	if(x>=0 && x<5){
		printf("Yeu");
		
	}else if(x>=5 && x<7){
		printf("TB");
	}
	else if(x>=7 && x<8){
		printf("Kha");
	}
	else if(x>=8 && x<9){
		printf("Gioi");
	}
	else if(x>9 && x<10){
		printf("Xuat sac");
	}
	else printf("Diem so kh hop le");
	return 0;
	
}
