#include <stdio.h>


int main  () {

    int i;
    int j;
    int gsayi;

    printf("LUTFEN BIR SAYI GIRINIZ : ");
    scanf("%d",&gsayi);

    for (i = gsayi ;i !=0 ;i--) {
        if (i % 2 == 1 ) {


            for (j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}
