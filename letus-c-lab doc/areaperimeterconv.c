#include<stdio.h>
int main()
{
int l,b,r,areac,arear,peri,circumference;
printf("Enter the length of the rectangle");
scanf("%d",&l);
printf("Enter the breadth of the rectangle");
scanf("%d",&b);
arear=l*b;
peri=2*l*b;
areac=pi*r*r;
circumference=2*pi*r;
printf("Area of rectangle:%d",arear);
printf("Perimeter of rectangle:%d",peri);
printf("Area of Circle:%d",areac);
printf("Circumference of Circle:%d",circumference);
return 0;
}
