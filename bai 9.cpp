#include <stdio.h>

int main(){
	int a , b;
	printf("Nhap vao thang: " ,a);
	scanf("%d", &a);
	printf("Nhap vao nam: ", b);
	scanf("%d",&b);
	switch(a){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang %d nam %d co 31 ngay", a , b);
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang %d nam %d co 30 ngay", a ,b);
			break;
		case 2:
			if((a%100==0) && (a%4==0 && a%100 != 0)){
				printf("Thang %d nam %d co 29 ngay", a ,b);
			}
			else{
				printf("Thang %d nam %d co 28 ngay",a ,b);
			}
		    break;
	}
	return 0;
	
}
