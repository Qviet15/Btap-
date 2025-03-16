#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
	double r , V ,S;
	printf("Nhap vao ban kinh: ");
	scanf("%lf" ,&r);
	S = 4*PI*r*r ;
	V = (4/3)*PI*r*r*r ;
	printf("Dien tich hinh cau la: %.2lf\n" , S);
	printf("The tich hinh cau la: %.2lf" , V);
	return 0;
	
}

