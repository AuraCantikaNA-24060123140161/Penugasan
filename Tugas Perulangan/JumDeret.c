#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int i;
    int total = 0;

    //Algoritma
    printf("Masukan sembarang nilai lebih dari 0: ");
    scanf("%d", &i);
    while(i>0){
        total+=i;
        i--;
    }
    printf("Hasil operasi aritmatika: %d", total);

    return 0;
}
