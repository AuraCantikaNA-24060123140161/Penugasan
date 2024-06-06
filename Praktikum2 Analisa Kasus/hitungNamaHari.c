#include <stdio.h>
int main () {
    int h;

    printf("Masukkan nomor hari yang sesuai = ");
    scanf ("%d", &h);
    if(h==1){
        printf("Minggu");
    }else if(h==2){
        printf("Senin");
    }else if(h==3){
        printf("Selasa");
    }else if(h==4){
        printf("Rabu");
    }else if(h==5){
        printf("Kamis");
    }else if(h==6){
        printf("Jumat");
    }else if(h==7){
        printf("Sabtu");
    }else{
        printf("Nomer hari yang dimasukkan tidak sesuai");
    }
return 0;
}