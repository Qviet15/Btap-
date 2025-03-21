#include <stdio.h>
#include <math.h>

int hoanhao(int n){
    int sum=0;
    for(int i=1; i<=n ; i++){
        if(n%i==0) sum +=i;
    }
    return sum;
}
int main(){
    int n;
    printf("hay nhap so n: ");
    scanf("%d", &n);
    if(n>0){
        if(hoanhao(n)==n*2){
        printf("Day la so hoan hao!!\n");
    }
    else printf("Day khong phai la so hoan hao!");
} else printf("n phai la so nguyen duong!");
    return 0;
}
