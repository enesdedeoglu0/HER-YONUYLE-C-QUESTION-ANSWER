#include <stdio.h>

int main() {

    int sayi = 0;

    int i;
    printf("LUTFEN BIR SAYI GIRINIZ  :  ");
    scanf("%d",&sayi);
    printf("GIRDIGINIZ SAYIYA KADAR 3'UN KATI OLAN SAYILAR   :    \n");

    for (i = 0; i<=sayi;i=i+3 ) {
        printf("%d\n",i);
    }
    printf( "SAYILAR BITTI. PROGRAMDAN CIKILIYOR...");
    return 0;
}
