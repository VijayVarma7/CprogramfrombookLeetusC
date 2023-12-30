#include<stdio.h>
int main(){
    float gross,basic,da,hra;
    printf("Enter the basic salary");
    scanf("%f",&basic);
    da=basic*0.4;
    hra=basic*0.2;
    gross=basic+da+hra;
    printf("enter da: %.2f",da);
    printf("enter hra: %.2f",hra);
    printf("gross: %.2f",gross);
    return 0;
    
}