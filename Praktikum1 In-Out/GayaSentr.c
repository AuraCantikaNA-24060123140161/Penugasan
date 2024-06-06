#include <stdio.h>/*header file*/

int main() {
    int m,v,r;
    float F;
    printf("masukkan massa =");
    scanf("%d",&m);
    printf("masukkan kecepatan =");
    scanf("%d",&v);
    printf("masukkan jari jari =");
    scanf("%d",&r);

    F = m * (v*v)/r;

    printf("Gaya : %f meter/n" , F );

}