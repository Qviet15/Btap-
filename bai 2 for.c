#include <stdio.h>
#include <math.h>

int songuyento(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return n;
}
 int main(){
 int n;
 printf("Nhap vao so:");
 scanf("%d", &n);
 if(n>1){
    if(songuyento(n)){
    printf("%d la so nguyen to", n);
 }else printf("n khong phai la so nguyen to!!!");
 }
 else printf("%d khong phai la so nguyen to", n);
 return 0;
 }
