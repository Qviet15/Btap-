#include <stdio.h>
#include <math.h>

float gpt(float a, float b, float c, float d, float e, float f){
      float D=a*e-b*d;
      if(D==0){
        printf("Phuong trinh vo nghiem hoac co vo so nghiem!!");
      }else {
           float x=(c*e-b*f)/D;
           float y=(a*f-c*d)/D;
           printf("phuong trinh co nghiem x= %.2f\n", x);
           printf("phuong tirnh co nghiem y= %.2f", y);
           }
           return 0;
}
int main(){
    float a,b,c,d,e,f;
    printf("nhap he so a ,b ,c cua phuong trinh ax + by=c :\n");
    scanf("%f%f%f", &a, &b ,&c);
    printf("nhap he so d, e, f cua phuong trinh dx + ey= f :\n");
    scanf("%f%f%f", &d, &e, &f);
    gpt(a , b ,c, d, e, f);
    return 0;
}
