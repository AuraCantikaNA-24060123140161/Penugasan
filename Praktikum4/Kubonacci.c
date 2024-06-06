#include <stdio.h>

int kubo(int n){
    if (n <= 1) {
        return n;
    } else {
        return kubo(n - 1) * kubo(n - 1) * kubo(n - 1) + kubo(n - 2) * kubo(n - 2) * kubo(n - 2);
    }
}

int main(){
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    int m = kubo(n);
    printf("Hasil kubo(n): %d\n", m);
    return 0;
}