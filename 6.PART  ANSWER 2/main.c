#include <stdio.h>

int main() {
 int s1;
 int s2;
 int kalan;


    printf("LUTfEN 2 ADET SAYI  GIRINIZ  : ");

    scanf("%d %d",&s1,&s2);

   float sonuc;
   sonuc = (float) s1 / s2;

    printf("BOLME ISLEMININ SONUCU = %f\n",sonuc);

    kalan = s1 % s2;
    printf("BOLMEDEN KALAN = %d\n",kalan);

    return 0;
}
