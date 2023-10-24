#include <stdio.h>

int main() {

    int sayi = 0;
    int i = 0;
    printf("LUTFEN BIR SAYI GIRINIZ  :  ");
    scanf("%d", &sayi);
    printf("GIRDIGINIZ SAYIYA KADAR 3'UN KATI OLAN SAYILAR   :    \n");

    do {
        printf("%d\n",i);
        i = i +3;

    }while (i <= sayi);

    printf( "SAYILAR BITTI. PROGRAMDAN CIKILIYOR...");
    return 0;
}
