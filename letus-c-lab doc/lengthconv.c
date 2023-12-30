#include<stdio.h>
int main(){
    int dist,meters,cm,f,in;
    printf("Distance between two citiesbin km");
    scanf("%d",&dist);
    meters=dist*1000;
    cm = dist * 1000 * 100;
    f = dist * 3280.84;
    in = dist * 39370.08;
    printf("Dist in metres %d\n",meters);
    printf("Dist in cm %d\n",cm);
    
    return 0;
    
}