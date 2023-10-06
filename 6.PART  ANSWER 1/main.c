#include <stdio.h>
#include <stdlib.h>

int main() {


    printf("-------------------------\n");
    printf("GIRDIGINIZ SAYINIZ TEK MI CIFT MI OLDUGUNU YAZAN PROGRAMA HOSGELDINIZ.\n");
    printf("LUTFEN BIR SAYI GIRINZ :  ");
    int gsayi ;
    scanf("%d",&gsayi);


    if ( gsayi%2 == 0 ) {

        printf("Girdiginiz sayi cift");

     }

    else   {
           printf("Girdiginiz sayi tek");
       }

    return 0;
}
