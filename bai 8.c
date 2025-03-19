#include <stdio.h>
#include <math.h>

int main(){
    float p,a ,b, c , S ,C;
    printf("Hay nhap 3 so a,b,c lan luot:\n");
    scanf("%f%f%f", &a, &b, &c);
     p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    C=a+b+c;
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            printf("Day la tam giac deu!!\n");
        }
        else if(a==b || a==c || b==c){
            if(a*a + b*b == c*c || a*a+c*c==b*b || b*b+c*c==a*a){
            printf("Day la tam giac vuong can!!\n");
            }
            else printf("Day la tam giac can!!\n");
        }
        else if(a*a + b*b == c*c || a*a+c*c==b*b || b*b+c*c==a*a){
            printf("Day la tam giac vuong!!\n");
        }
        else printf("Day la tam giac thuong!\n");

}
        printf("dien tich tam giac la: %.2f\n", S);
        printf("chu vi tam giac la:%.2f", C);

return 0;
}




