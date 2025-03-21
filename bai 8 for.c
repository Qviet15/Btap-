#include <stdio.h>
#include <math.h>

int gthua(int n){
    int gt=1;
    for(int i=1; i<=n; i++){
        gt*=i;
    }
    return gt;
}
int main (){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    gthua(n);
    printf("%d", gthua(n));
    return 0;
}
