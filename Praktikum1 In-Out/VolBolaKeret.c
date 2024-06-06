#include <stdio.h>

int main(void) {
  int r;
  float pi = 3.14;
  float Vb,Vk,V ;

  printf("masukkan jari jari = ");
  scanf("%d",&r);

  Vb = 4.0/3.0*(pi*r*r*r);

  Vk = 0.5* Vb;

  printf("Vb = %f meter/n",Vb);

  printf("Vk = %f meter/n",Vk);

  return 0;

}