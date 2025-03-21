#include <stdio.h>
#include <math.h>

double tong(int n){
       double S=0;
       for(int i=1; i<=n; i++){
        S +=(double)1/i;
       }
       return S;
}
int main(){
    double n;
    printf("Hay nhap so n: ");
    scanf("%lf", &n);
    tong(n);
    printf("%.2lf", tong(n));
    return 0;
}
