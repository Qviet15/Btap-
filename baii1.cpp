#include <stdio.h>
#include <math.h>

int main(){
	int songuyen ;
	int sum=0;
	for(int i=0; i< 10; i++){
		printf("nhap so nguyen thu %d:", i+1);
		scanf("%d", &songuyen);
	    sum += songuyen;
	}
	printf("Tong 10 so nguyen la: %d", sum);
	return 0;
	
}
