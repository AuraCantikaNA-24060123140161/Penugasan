#include <stdio.h>
int main () {
    int i;
    int sum = 0;

    printf("Masukan sembarang nilai lebih dari 0: ");
    scanf("%d", &i);
    for(int x = 1;x < i; x++){
        if(i % x == 0){sum+=x;}
        else{continue;}}
    if(sum == i){printf("Bilangan Sempurna");}
    else{printf("Bukan Bilangan Sempurna");}
    printf(" {jumlah faktor bilangannya 1");
    for(int y = 2;y < i; y++){
        if(i % y == 0){printf("+%d", y);}
        else{continue;}}
    printf("=%d}", sum);

    return 0;
}