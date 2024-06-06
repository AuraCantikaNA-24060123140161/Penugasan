#include <stdio.h>
int main () {

    //kamus 
    float i;

    //algoritma 
    printf("masukan bilangan bulat sembarang = ");
    scanf("%f",&i);

    if (i>0){
        printf("bilangan  merupakan bilangan bulat positif");
    }else if (i=0){
        printf("bilangan  merupakan nol ");
    }else {
        printf("bilangan  merupakan bilangan bulat negatif");
    }
  
return 0;

}