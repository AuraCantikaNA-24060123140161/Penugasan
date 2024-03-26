#include <stdlib.h>
#include <stdio.h>

int main(){
    int i;

    printf("Masukan sembarang nilai lebih dari 0: ");
    scanf("%d", &i);
    printf("Bilangan primanya adalah");
    for(int x = 1; x <= i; x++){
        int faktor = 0;
        for(int y = 1; y <= x; y++){
            if(x % y == 0){faktor++;}
            else{continue;}
        }
        if(faktor == 2){
            if(x == 2){printf(" %d", x);}
            else{printf(", %d", x);}
        }
        else{continue;}
    }
    return 0;
}