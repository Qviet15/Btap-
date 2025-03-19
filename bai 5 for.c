#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for( int i=1; i<=n; i++){
        if( n%i == 0){
                printf("Cac uoc so cua n la: ");
            printf("%d ", i);
        }
    }
    return 0;
}
