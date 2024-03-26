#include <stdio.h>
int main () {
    int i;

    printf("Maasukkan sembarang nilai lebih dari 0 = ");
    scanf("%d", &i);
    printf("Faktor bilangannya adalah 1");
    for(int x = 2; x <= i; x++){
        if(i % x == 0){
            printf(", %d", x);
        }else{
            continue;
        }
}
return 0;
}